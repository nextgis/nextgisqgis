# -*- coding: utf-8 -*-

"""
***************************************************************************
    versioncheck.py
    ---------------------
    Date                 : December 2014
    Copyright            : (C) 2014 by Victor Olaya
    Email                : volayaf at gmail dot com
***************************************************************************
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
***************************************************************************
"""

__author__ = 'Victor Olaya'
__date__ = 'December 2014'
__copyright__ = '(C) 2014, Victor Olaya'

import os
import subprocess


def getAlgParams(f):
    params = []
    booleanparams = []
    numparams = []
    with open(f) as lines:
        line = lines.readline().strip('\n').strip()
        name = line
        if '|' in name:
            tokens = name.split('|')
            cmdname = tokens[1]
        else:
            cmdname = name
        line = lines.readline().strip('\n').strip()
        group = line
        line = lines.readline().strip('\n').strip()
        while line != '':
            if line.startswith('Hardcoded'):
                pass
            elif line.startswith('AllowUnmatching'):
                pass
            elif line.startswith('Extent'):
                extentParamNames = line[6:].strip().split(' ')
                params.extend(["-" + p for p in extentParamNames])
            else:
                tokens = line.split("|")
                if tokens[0] == "ParameterBoolean":
                    booleanparams.append("-" + tokens[1].strip())
                elif tokens[0] == "ParameterNumber":
                    numparams.append("-" + tokens[1].strip())
                else:
                    params.append("-" + tokens[1])
            line = lines.readline().strip('\n').strip()
    return cmdname, group, params, booleanparams, numparams


def testDescriptionFile(f):
    usage = ""
    cmdname, group, params, booleanparams, numparams = getAlgParams(f)
    command = [r'd:\saga2.1.2\saga_cmd.exe', group, cmdname]
    for p in params:
        command.append(p)
        command.append("dummy")
    for p in numparams:
        command.append(p)
        command.append("0")
    command.extend(booleanparams)
    proc = subprocess.Popen(
        command,
        shell=True,
        stdout=subprocess.PIPE,
        stdin=subprocess.DEVNULL,
        stderr=subprocess.STDOUT,
        universal_newlines=True,
    ).stdout
    lines = []
    for line in iter(proc.readline, ''):
        lines.append(line)
        if "Usage" in line:
            usage = line

    if usage and not lines[0].startswith("_"):
        # fix_print_with_import
        print("-" * 50)
        # fix_print_with_import
        print(f + " [ERROR]")
        # fix_print_with_import
        print(lines)
        # fix_print_with_import
        print(usage)
        # fix_print_with_import
        print("Name in description:" + cmdname)
        # fix_print_with_import
        print("Parameters in description:" + str(params))
        # fix_print_with_import
        print("-" * 50)
        print()


if __name__ == '__main__':
    folder = os.path.join(os.path.dirname(__file__), "description")
    for descriptionFile in os.listdir(folder):
        if descriptionFile.endswith('txt'):
            testDescriptionFile(os.path.join(folder, descriptionFile))
