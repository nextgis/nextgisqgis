/***************************************************************************
    qgscodeeditor.h - A base code editor for QGIS and plugins.  Provides
                      a base editor using QScintilla for editors
     --------------------------------------
    Date                 : 06-Oct-2013
    Copyright            : (C) 2013 by Salvatore Larosa
    Email                : lrssvtml (at) gmail (dot) com
 ***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSCODEEDITOR_H
#define QGSCODEEDITOR_H

#include <QString>
#include "qgscodeeditorcolorscheme.h"
// qscintilla includes
#include <Qsci/qsciapis.h>
#include "qgis_sip.h"
#include "qgis_gui.h"

#include <QMap>


SIP_IF_MODULE( HAVE_QSCI_SIP )


class QWidget;

/**
 * \ingroup gui
 * \brief A text editor based on QScintilla2.
 * \note may not be available in Python bindings, depending on platform support
 * \since QGIS 2.6
 */
class GUI_EXPORT QgsCodeEditor : public QsciScintilla
{
    Q_OBJECT

  public:

    /**
     * Margin roles.
     *
     * This enum contains the roles which the different numbered margins are used for.
     *
     * \since QGIS 3.16
     */
    enum MarginRole
    {
      LineNumbers = 0, //!< Line numbers
      ErrorIndicators = 1, //!< Error indicators
      FoldingControls = 2, //!< Folding controls
    };

    /**
     * Construct a new code editor.
     *
     * \param parent The parent QWidget
     * \param title The title to show in the code editor dialog
     * \param folding FALSE: Enable folding for code editor
     * \param margin FALSE: Enable margin for code editor (deprecated)
     * \since QGIS 2.6
     */
    QgsCodeEditor( QWidget *parent SIP_TRANSFERTHIS = nullptr, const QString &title = QString(), bool folding = false, bool margin = false );

    /**
     * Set the widget title
     * \param title widget title
     */
    void setTitle( const QString &title );

    /**
     * Set margin visible state
     * \param margin Set margin in the editor
     * \deprecated Use base class methods for individual margins instead, or setLineNumbersVisible()
     */
    Q_DECL_DEPRECATED void setMarginVisible( bool margin ) SIP_DEPRECATED;

    /**
     * Returns whether margins are in a visible state
     * \deprecated Use base class methods for individual margins instead, or lineNumbersVisible()
     */
    Q_DECL_DEPRECATED bool marginVisible() SIP_DEPRECATED { return mMargin; }

    /**
     * Sets whether line numbers should be visible in the editor.
     *
     * Defaults to FALSE.
     *
     * \see lineNumbersVisible()
     * \since QGIS 3.16
     */
    void setLineNumbersVisible( bool visible );

    /**
     * Returns whether line numbers are visible in the editor.
     *
     * \see setLineNumbersVisible()
     * \since QGIS 3.16
     */
    bool lineNumbersVisible() const;

    /**
     * Set whether the folding controls are visible in the editor.
     * \see foldingVisible()
     */
    void setFoldingVisible( bool folding );

    /**
     * Returns TRUE if the folding controls are visible in the editor.
     * \see setFoldingVisible()
     */
    bool foldingVisible() { return mFolding; }

    /**
     * Insert text at cursor position, or replace any selected text if user has
     * made a selection.
     * \param text The text to be inserted
     */
    void insertText( const QString &text );

    /**
     * Returns the default color for the specified \a role.
     *
     * The optional \a theme argument can be used to specify a color \a theme. A blank
     * \a theme indicates the default color scheme.
     *
     * Available themes are stored in QgsCodeEditorColorSchemeRegistry, and can be retrieved
     * via QgsGui::codeEditorColorSchemeRegistry().
     *
     * \since QGIS 3.16
     */
    static QColor defaultColor( QgsCodeEditorColorScheme::ColorRole role, const QString &theme = QString() );

    /**
     * Returns the color to use in the editor for the specified \a role.
     *
     * This color will be the default theme color for the role, unless the user has manually
     * selected a custom color scheme for the editor.
     *
     * \see setColor()
     * \since QGIS 3.16
     */
    static QColor color( QgsCodeEditorColorScheme::ColorRole role );

    /**
     * Sets the \a color to use in the editor for the specified \a role.
     *
     * This color will be stored as the new default color for the role, to be used for all code editors.
     *
     * Set \a color to an invalid QColor in order to clear the stored color value and reset it to
     * the default color.
     *
     * \see color()
     * \since QGIS 3.16
     */
    static void setColor( QgsCodeEditorColorScheme::ColorRole role, const QColor &color );

    /**
     * Returns the monospaced font to use for code editors.
     *
     * \since QGIS 3.16
     */
    static QFont getMonospaceFont();

    /**
     * Sets a custom appearance for the widget, disconnecting it from using the standard appearance
     * taken from QSettings.
     *
     * \note Not available in Python bindings
     * \since QGIS 3.16
     */
    void setCustomAppearance( const QString &scheme = QString(), const QMap< QgsCodeEditorColorScheme::ColorRole, QColor > &customColors = QMap< QgsCodeEditorColorScheme::ColorRole, QColor >(), const QString &fontFamily = QString(), int fontSize = 0 ) SIP_SKIP;

    /**
     * Adds a \a warning message and indicator to the specified a \a lineNumber.
     *
     * \see clearWarnings()
     * \since QGIS 3.16
     */
    void addWarning( int lineNumber, const QString &warning );

    /**
     * Clears all warning messages from the editor.
     *
     * \see addWarning()
     * \since QGIS 3.16
     */
    void clearWarnings();

  protected:

    bool isFixedPitch( const QFont &font );

    void focusOutEvent( QFocusEvent *event ) override;
    void keyPressEvent( QKeyEvent *event ) override;

    /**
     * Called when the dialect specific code lexer needs to be initialized (or reinitialized).
     *
     * The default implementation does nothing.
     *
     * \since QGIS 3.16
     */
    virtual void initializeLexer();

    /**
     * Returns the color to use in the lexer for the specified \a role.
     *
     * \since QGIS 3.16
     */
    QColor lexerColor( QgsCodeEditorColorScheme::ColorRole role ) const;

    /**
     * Returns the font to use in the lexer.
     *
     * \since QGIS 3.16
     */
    QFont lexerFont() const;

    /**
     * Performs tasks which must be run after a lexer has been set for the widget.
     *
     * \since QGIS 3.16
     */
    void runPostLexerConfigurationTasks();

  private:

    void setSciWidget();

    QString mWidgetTitle;
    bool mFolding;
    bool mMargin;

    bool mUseDefaultSettings = true;
    // used if above is false, inplace of values taken from QSettings:
    bool mOverrideColors = false;
    QString mColorScheme;
    QMap< QgsCodeEditorColorScheme::ColorRole, QColor > mCustomColors;
    QString mFontFamily;
    int mFontSize = 0;

    QVector< int > mWarningLines;

    static QMap< QgsCodeEditorColorScheme::ColorRole, QString > sColorRoleToSettingsKey;

    static constexpr int MARKER_NUMBER = 6;
};

// clazy:excludeall=qstring-allocations

#endif
