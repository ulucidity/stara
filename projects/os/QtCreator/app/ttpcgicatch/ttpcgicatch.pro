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
#   File: ttpcgicatch.pro
#
# Author: $author$
#   Date: 5/28/2025
#
# os specific QtCreator project .pro file for framework stara executable ttpcgicatch
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;cifra;bn;mp
#
# Debug: stara/build/os/QtCreator/Debug/bin/ttpcgicatch
# Release: stara/build/os/QtCreator/Release/bin/ttpcgicatch
# Profile: stara/build/os/QtCreator/Profile/bin/ttpcgicatch
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/ttpcgicatch/ttpcgicatch.pri)

TARGET = $${ttpcgicatch_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${ttpcgicatch_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${ttpcgicatch_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${ttpcgicatch_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${ttpcgicatch_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${ttpcgicatch_HEADERS} \
$${ttpcgicatch_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${ttpcgicatch_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${ttpcgicatch_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${ttpcgicatch_LIBS} \
$${FRAMEWORKS} \

########################################################################

