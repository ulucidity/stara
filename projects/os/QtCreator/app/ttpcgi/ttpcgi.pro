########################################################################
# Copyright (c) 1988-2025 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: ttpcgi.pro
#
# Author: $author$
#   Date: 5/28/2025
#
# os specific QtCreator project .pro file for framework stara executable ttpcgi
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;cifra;bn;mp
#
# Debug: stara/build/os/QtCreator/Debug/bin/ttpcgi
# Release: stara/build/os/QtCreator/Release/bin/ttpcgi
# Profile: stara/build/os/QtCreator/Profile/bin/ttpcgi
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/ttpcgi/ttpcgi.pri)

TARGET = $${ttpcgi_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${ttpcgi_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${ttpcgi_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${ttpcgi_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${ttpcgi_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${ttpcgi_HEADERS} \
$${ttpcgi_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${ttpcgi_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${ttpcgi_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${ttpcgi_LIBS} \
$${FRAMEWORKS} \

########################################################################

