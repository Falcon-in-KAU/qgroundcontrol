/*=====================================================================
 
 QGroundControl Open Source Ground Control Station
 
 (c) 2009 - 2014 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 
 This file is part of the QGROUNDCONTROL project
 
 QGROUNDCONTROL is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 QGROUNDCONTROL is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.
 
 ======================================================================*/

#ifndef SENSORSCOMPONENT_H
#define SENSORSCOMPONENT_H

#include "PX4Component.h"

/// @file
///     @brief The Sensors VehicleComponent is used to calibrate the the various sensors associated with the board.
///     @author Don Gagne <don@thegagnes.com>

class SensorsComponent : public PX4Component
{
    Q_OBJECT
    
public:
    SensorsComponent(UASInterface* uas, QObject* parent = NULL);
    
    // Virtuals from PX4Component
    virtual const char** setupCompleteChangedTriggerList(void) const;
    
    // Virtuals from VehicleComponent
    virtual QString name(void) const;
    virtual QString description(void) const;
    virtual QString icon(void) const;
    virtual bool requiresSetup(void) const;
    virtual bool setupComplete(void) const;
    virtual QString setupStateDescription(void) const;
    virtual QWidget* setupWidget(void) const;
    virtual QStringList paramFilterList(void) const;
    virtual QList<QStringList> summaryItems(void) const;
    
private:
    const QString               _name;
};

#endif