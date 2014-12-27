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
** Summary: Header of the companion class for the speedometer control Widget
**
****************************************************************************/

#ifndef SPEEDOMETERPLUGIN_H
#define SPEEDOMETERPLUGIN_H

#include <QObject>
#include <QDesignerCustomWidgetInterface>

class SpeedometerPlugin : public QObject, public QDesignerCustomWidgetInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QDesignerCustomWidgetInterface" FILE "speedometer.json")
    Q_INTERFACES(QDesignerCustomWidgetInterface)

public:
    explicit SpeedometerPlugin(QObject *parent = 0);

    bool isContainer() const;
    bool isInitialized() const;
    QIcon icon() const;
    QString domXml() const;
    QString group() const;
    QString includeFile() const;
    QString name() const;
    QString toolTip() const;
    QString whatsThis() const;
    QWidget *createWidget(QWidget *parent);
    void initialize(QDesignerFormEditorInterface *core);

private:
    bool initialized;

};

#endif // SPEEDOMETERPLUGIN_H
