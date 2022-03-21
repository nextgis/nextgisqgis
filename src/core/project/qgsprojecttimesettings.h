/***************************************************************************
                         qgsprojecttimesettings.h
                         ---------------
    begin                : February 2020
    copyright            : (C) 2020 by Samweli Mwakisambwe
    email                : samweli at kartoza dot com
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/
#ifndef QGSPROJECTTIMESETTINGS_H
#define QGSPROJECTTIMESETTINGS_H

#include "qgis_core.h"
#include "qgsrange.h"
#include "qgsunittypes.h"
#include <QObject>

class QDomElement;
class QgsReadWriteContext;
class QDomDocument;

/**
 * \brief Contains temporal settings and properties for the project,
 * this may be used when animating maps or showing temporal layers.
 *
 * \ingroup core
 * \since QGIS 3.14
 */
class CORE_EXPORT QgsProjectTimeSettings : public QObject
{
    Q_OBJECT

  public:

    /**
     * Constructor for QgsProjectTimeSettings with the specified \a parent object.
     */
    QgsProjectTimeSettings( QObject *parent SIP_TRANSFERTHIS = nullptr );

    /**
     * Resets the settings to a default state.
     */
    void reset();

    /**
     * Returns the project's temporal range, which indicates the earliest
     * and latest datetime ranges associated with the project.
     *
     * \note This is a manual, use-set property, and does not necessarily
     * coincide with the earliest and latest temporal ranges set for
     * individual layers in the project.
     *
     * \see setTemporalRange()
     * \see temporalRangeChanged()
     */
    QgsDateTimeRange temporalRange() const;

    /**
     * Sets the project's temporal \a range, which indicates the earliest
     * and latest datetime ranges associated with the project.
     *
     * \note This is a manual, use-set property, and does not necessarily
     * coincide with the earliest and latest temporal ranges set for
     * individual layers in the project.
     *
     * \see temporalRange()
     * \see temporalRangeChanged()
     */
    void setTemporalRange( const QgsDateTimeRange &range );

    /**
     * Reads the settings's state from a DOM \a element.
     * \see writeXml()
     */
    bool readXml( const QDomElement &element, const QgsReadWriteContext &context );

    /**
     * Returns a DOM element representing the settings.
     * \see readXml()
     */
    QDomElement writeXml( QDomDocument &document, const QgsReadWriteContext &context ) const;

    /**
     * Returns the project's time step (length of one animation frame) unit, which is used as the default value when
     * animating the project.
     *
     * \see setTimeStepUnit()
     * \see timeStep()
     */
    QgsUnitTypes::TemporalUnit timeStepUnit() const;

    /**
     * Sets the project's time step (length of one animation frame) \a unit, which is used as the default value when
     * animating the project.
     *
     * \see timeStepUnit()
     * \see setTimeStep()
     */
    void setTimeStepUnit( QgsUnitTypes::TemporalUnit unit );

    /**
     * Returns the project's time step (length of one animation frame), which is used as the default value when
     * animating the project.
     *
     * Units are specified via timeStepUnit()
     *
     * \see setTimeStep()
     * \see timeStepUnit()
     */
    double timeStep() const;

    /**
     * Sets the project's time \a step (length of one animation frame), which is used as the default value when
     * animating the project.
     *
     * Units are specified via setTimeStepUnit()
     *
     * \see timeStep()
     * \see setTimeStepUnit()
     */
    void setTimeStep( double step );

    /**
     * Sets the project's default animation frame \a rate, in frames per second.
     *
     * \see framesPerSecond()
     */
    void setFramesPerSecond( double rate );

    /**
     * Returns the project's default animation frame rate, in frames per second.
     *
     * \see setFramesPerSecond()
     */
    double framesPerSecond() const;

    /**
     * Sets the project's temporal range as cumulative in animation settings.
     *
     * \see isTemporalRangeCumulative()
     */
    void setIsTemporalRangeCumulative( bool state );

    /**
     * Returns the value of cumulative temporal range in animation settings.
     *
     * \see setIsTemporalRangeCumulative()
     */
    bool isTemporalRangeCumulative() const;

  signals:

    /**
     * Emitted when the temporal range changes.
     *
     * \see temporalRange()
     * \see setTemporalRange()
     */
    void temporalRangeChanged();

  private:

    QgsDateTimeRange mRange;
    QgsUnitTypes::TemporalUnit mTimeStepUnit = QgsUnitTypes::TemporalHours;
    double mTimeStep = 1;
    double mFrameRate = 1;
    bool mCumulativeTemporalRange = false;
};


#endif // QGSPROJECTTIMESETTINGS_H
