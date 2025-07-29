#!/usr/bin/env python3
"""
Script to update Qt translations in TS files.

This script collects translations from the source TS file and updates
matching entries in the target TS file based on context, source text,
comment, and location filename.
"""

import argparse
from pathlib import Path
import xml.etree.ElementTree as ET
from typing import Dict, List, Optional
from dataclasses import dataclass
import html


@dataclass
class TranslationEntry:
    """
    Represents a translation entry in a TS file.

    :param context: Context name
    :param filename: Optional location filename
    :param source: Source text
    :param translation: Translation text
    :param translation_attrs: Attributes of <translation> from source
    """

    context: str
    filename: Optional[str]
    source: str
    translation: str
    translation_attrs: Dict[str, str]


def parse_translations(source_path: Path) -> Dict[str, List[TranslationEntry]]:
    """
    Parse translations from the source TS file.

    :param source_path: Path to the source TS file
    :return: Dictionary mapping context name to list of TranslationEntry
    """
    tree = ET.parse(str(source_path))
    root = tree.getroot()
    context_dict: Dict[str, List[TranslationEntry]] = {}
    for context in root.findall("context"):
        context_name = context.findtext("name") or ""
        entries: List[TranslationEntry] = []
        for message in context.findall("message"):
            source_text = message.findtext("source")
            if source_text is None:
                continue
            location = message.find("location")
            filename = location.get("filename") if location is not None else None
            translation_elem = message.find("translation")
            translation = translation_elem.text if translation_elem is not None else ""
            translation_attrs = translation_elem.attrib.copy() if translation_elem is not None else {}
            entry = TranslationEntry(
                context=context_name,
                source=source_text,
                filename=filename,
                translation=translation or "",
                translation_attrs=translation_attrs,
            )
            entries.append(entry)
        context_dict[context_name] = entries
    return context_dict


def escape_xml(text: Optional[str]) -> str:
    """
    Escape text for XML output, replacing single quote with &apos;.

    :param text: Input string or None
    :return: Escaped string for XML
    """
    if text is None:
        return ""
    return html.escape(text, quote=True).replace("&#x27;", "&apos;")


def write_ts_file(
    target_path: Path, translations: Dict[str, List[TranslationEntry]]
) -> None:
    """
    Write updated TS file preserving formatting and attribute order.

    Source: https://github.com/qt/qt/blob/0a2f2382541424726168804be2c90b91381608c6/tools/linguist/shared/ts.cpp#L540

    :param target_path: Path to the target TS file
    :param translations: Dictionary mapping context name to list of TranslationEntry
    """
    tree = ET.parse(str(target_path))
    root = tree.getroot()

    # Get TS attributes
    ts_attrs = root.attrib.copy()
    ts_version = ts_attrs.get("version", "2.0")
    language = ts_attrs.get("language")
    sourcelanguage = ts_attrs.get("sourcelanguage")

    # Find <defaultcodec> if present
    defaultcodec_elem = root.find("defaultcodec")
    defaultcodec = defaultcodec_elem.text if defaultcodec_elem is not None else None

    # Prepare output lines
    lines = []
    lines.append("<?xml version=\"1.0\" encoding=\"utf-8\"?>")
    lines.append("<!DOCTYPE TS>")
    ts_open = f"<TS version=\"{ts_version}\""
    if language:
        ts_open += f" language=\"{language}\""
    if sourcelanguage:
        ts_open += f" sourcelanguage=\"{sourcelanguage}\""
    ts_open += ">"
    lines.append(ts_open)
    if defaultcodec:
        lines.append(f"<defaultcodec>{escape_xml(defaultcodec)}</defaultcodec>")

    # Iterate contexts
    for context in root.findall("context"):
        context_name = context.findtext("name") or ""
        context_attrs = context.attrib.copy()
        context_encoding = context_attrs.get("encoding")
        context_open = "<context"
        if context_encoding:
            context_open += f" encoding=\"{context_encoding}\""
        context_open += ">"
        lines.append(context_open)
        lines.append(f"    <name>{escape_xml(context_name)}</name>")
        entries = translations.get(context_name, [])
        # Build lookup for fast access
        entry_lookup = {(e.source, e.filename): e for e in entries}
        for message in context.findall("message"):
            msg_attrs = message.attrib.copy()
            msg_open = "    <message"
            for k, v in msg_attrs.items():
                msg_open += f" {k}=\"{v}\""
            msg_open += ">"
            lines.append(msg_open)
            # Locations
            for location in message.findall("location"):
                loc_attrs = location.attrib.copy()
                loc_open = "        <location"
                for k, v in loc_attrs.items():
                    loc_open += f" {k}=\"{v}\""
                loc_open += "/>"
                lines.append(loc_open)
            # Source
            source_text = message.findtext("source") or ""
            lines.append(f"        <source>{escape_xml(source_text)}</source>")
            # Oldsource
            oldsource = message.findtext("oldsource")
            if oldsource:
                lines.append(f"        <oldsource>{escape_xml(oldsource)}</oldsource>")
            # Comment
            comment = message.findtext("comment")
            if comment:
                lines.append(f"        <comment>{escape_xml(comment)}</comment>")
            # Oldcomment
            oldcomment = message.findtext("oldcomment")
            if oldcomment:
                lines.append(f"        <oldcomment>{escape_xml(oldcomment)}</oldcomment>")
            # Extra comment
            extracomment = message.findtext("extracomment")
            if extracomment:
                lines.append(f"        <extracomment>{escape_xml(extracomment)}</extracomment>")
            # Translator comment
            translatorcomment = message.findtext("translatorcomment")
            if translatorcomment:
                lines.append(f"        <translatorcomment>{escape_xml(translatorcomment)}</translatorcomment>")
            # Translation
            translation_elem = message.find("translation")
            filename = None
            location = message.find("location")
            if location is not None:
                filename = location.get("filename")
            entry = entry_lookup.get((source_text, filename))
            if entry is not None:
                translation_attrs = entry.translation_attrs
                translation_text = entry.translation
            else:
                translation_attrs = translation_elem.attrib.copy() if translation_elem is not None else {}
                translation_text = translation_elem.text if translation_elem is not None else ""
            translation_open = "        <translation"
            for k, v in translation_attrs.items():
                translation_open += f" {k}=\"{v}\""
            translation_open += ">"
            lines.append(f"{translation_open}{escape_xml(translation_text)}</translation>")
            # Userdata
            userdata = message.findtext("userdata")
            if userdata:
                lines.append(f"        <userdata>{escape_xml(userdata)}</userdata>")
            lines.append("    </message>")
        lines.append("</context>")
    lines.append("</TS>")
    # Write to file
    with target_path.open("w", encoding="utf-8") as f:
        for line in lines:
            f.write(f"{line}\n")


def update_target(
    target_path: Path, translations: Dict[str, List[TranslationEntry]]
) -> None:
    """
    Update translations in the target TS file, preserving formatting and attribute order.

    :param target_path: Path to the target TS file
    :param translations: Dictionary mapping context name to list of TranslationEntry
    """
    write_ts_file(target_path, translations)


def main() -> None:
    """
    Run the translation updater script.

    Parse arguments, update translations, and save the result.
    """
    parser = argparse.ArgumentParser(description="Update Qt translations in TS files.")
    parser.add_argument("source", type=str, help="Source TS file path")
    parser.add_argument("target", type=str, help="Target TS file path")
    args = parser.parse_args()
    source_path = Path(args.source)
    target_path = Path(args.target)
    translations = parse_translations(source_path)
    update_target(target_path, translations)


if __name__ == "__main__":
    main()
