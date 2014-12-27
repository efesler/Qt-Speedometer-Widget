/****************************************************************************
**
** Copyright (C) 2014 Eric Fesler - ESD Sprl
** All rights reserved.
**
** License Agreement
**
** This program is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
**
**
** Software Author: Eric Fesler <eric.fesler@gmail.com>
**
** Summary: Companion class for the speedometer control Widget
**
****************************************************************************/

#include "speedometerplugin.h"
#include "speedometer.h"

#include <QtPlugin>

SpeedometerPlugin::SpeedometerPlugin(QObject *parent) : QObject(parent)
{
    initialized = false;
}

void SpeedometerPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (initialized)
        return;

    initialized = true;
}

bool SpeedometerPlugin::isInitialized() const
{
    return initialized;
}

QWidget *SpeedometerPlugin::createWidget(QWidget *parent)
{
    return new Speedometer(parent);
}

QString SpeedometerPlugin::name() const
{
    return "Speedometer";
}

QString SpeedometerPlugin::group() const
{
    return "ESD Lab";
}

QIcon SpeedometerPlugin::icon() const
{
    return QIcon();
}

QString SpeedometerPlugin::toolTip() const
{
    return "";
}

QString SpeedometerPlugin::whatsThis() const
{
    return "";
}

bool SpeedometerPlugin::isContainer() const
{
    return false;
}

QString SpeedometerPlugin::domXml() const
{
    return  "<ui language=\"c++\">\n"
            " <widget class=\"Speedometer\" name=\"speedometer\">\n"
            "  <property name=\"geometry\">\n"
            "   <rect>\n"
            "    <x>0</x>\n"
            "    <y>0</y>\n"
            "    <width>100</width>\n"
            "    <height>100</height>\n"
            "   </rect>\n"
            "  </property>\n"
            "  <property name=\"toolTip\" >\n"
            "   <string>Speedometer</string>\n"
            "  </property>\n"
            "  <property name=\"whatsThis\" >\n"
            "   <string>The Speedometer display the speed and the percentage of power assistance</string>\n"
            "  </property>\n"
            " </widget>\n"
            "</ui>\n";
}

QString SpeedometerPlugin::includeFile() const
{
    return "speedometer.h";
}
