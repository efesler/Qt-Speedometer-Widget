#-------------------------------------------------
#
# Copyright (C) 2014 Eric Fesler - ESD Sprl
# All rights reserved.
#
# License Agreement
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
#
# Software Author: Eric Fesler <eric.fesler@gmail.com>
#
# Project created by QtCreator 2014-12-21T09:46:10
#
#-------------------------------------------------

QT += widgets designer

CONFIG   += plugin release

TARGET = $$qtLibraryTarget($$TARGET)

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS += target
TEMPLATE = lib


SOURCES += speedometer.cpp\
        speedometerplugin.cpp

HEADERS  += speedometer.h \
    speedometerplugin.h

DISTFILES += \
    speedometer.json



