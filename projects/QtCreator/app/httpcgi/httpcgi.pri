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
#   File: httpcgi.pri
#
# Author: $author$
#   Date: 5/28/2025
#
# generic QtCreator project .pri file for framework stara executable httpcgi
########################################################################

########################################################################
# httpcgi

# httpcgi TARGET
#
httpcgi_TARGET = httpcgi

# httpcgi INCLUDEPATH
#
httpcgi_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# httpcgi DEFINES
#
httpcgi_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# httpcgi OBJECTIVE_HEADERS
#
#httpcgi_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/httpcgi/main.hh \

# httpcgi OBJECTIVE_SOURCES
#
#httpcgi_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/httpcgi/main.mm \

########################################################################
# httpcgi HEADERS
#
httpcgi_HEADERS += \
$${NADIR_SRC}/xos/console/sequence.hpp \
$${NADIR_SRC}/xos/console/out.hpp \
$${NADIR_SRC}/xos/console/output.hpp \
$${NADIR_SRC}/xos/console/input.hpp \
$${NADIR_SRC}/xos/console/error.hpp \
$${NADIR_SRC}/xos/console/io.hpp \
$${NADIR_SRC}/xos/console/main.hpp \
$${NADIR_SRC}/xos/console/getopt/main_opt.hpp \
$${NADIR_SRC}/xos/console/getopt/main.hpp \
\
$${NADIR_SRC}/xos/app/console/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/main.hpp \
$${NADIR_SRC}/xos/app/console/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/version/main.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/cgi/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/catcher/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/catcher/main.hpp \

# httpcgi SOURCES
#
httpcgi_SOURCES += \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/main_opt.cpp \
$${STARA_SRC}/xos/app/console/protocol/http/cgi/main.cpp \

########################################################################
# httpcgi FRAMEWORKS
#
httpcgi_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# httpcgi LIBS
#
httpcgi_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core

