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
#   File: ttpnet.pro
#
# Author: $author$
#   Date: 2/1/2025
#
# os specific QtCreator project .pro file for framework stara executable ttpnet
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;cifra;bn;mp
#
# Debug: stara/build/os/QtCreator/Debug/bin/ttpnet
# Release: stara/build/os/QtCreator/Release/bin/ttpnet
# Profile: stara/build/os/QtCreator/Profile/bin/ttpnet
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/ttpnet/ttpnet.pri)

TARGET = $${ttpnet_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${ttpnet_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${ttpnet_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${ttpnet_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${ttpnet_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${ttpnet_HEADERS} \
$${ttpnet_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${ttpnet_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${ttpnet_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${ttpnet_LIBS} \
$${FRAMEWORKS} \

########################################################################

