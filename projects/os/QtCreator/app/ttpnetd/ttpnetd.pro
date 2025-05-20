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
#   File: ttpnetd.pro
#
# Author: $author$
#   Date: 2/2/2025
#
# os specific QtCreator project .pro file for framework stara executable ttpnetd
########################################################################
# Depends: rostra;nadir;fila;crono;versa;rete;cifra;bn;mp
#
# Debug: stara/build/os/QtCreator/Debug/bin/ttpnetd
# Release: stara/build/os/QtCreator/Release/bin/ttpnetd
# Profile: stara/build/os/QtCreator/Profile/bin/ttpnetd
#
include(../../../../../build/QtCreator/stara.pri)
include(../../../../QtCreator/stara.pri)
include(../../stara.pri)
include(../../../../QtCreator/app/ttpnetd/ttpnetd.pri)

TARGET = $${ttpnetd_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${ttpnetd_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${ttpnetd_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${ttpnetd_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${ttpnetd_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${ttpnetd_HEADERS} \
$${ttpnetd_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${ttpnetd_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${ttpnetd_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${ttpnetd_LIBS} \
$${FRAMEWORKS} \

########################################################################

