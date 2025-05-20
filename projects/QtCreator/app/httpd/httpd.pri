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
#   File: httpd.pri
#
# Author: $author$
#   Date: 1/26/2025
#
# generic QtCreator project .pri file for framework stara executable httpd
########################################################################

########################################################################
# httpd

# httpd TARGET
#
httpd_TARGET = httpd

# httpd INCLUDEPATH
#
httpd_INCLUDEPATH += \
$${stara_INCLUDEPATH} \

# httpd DEFINES
#
httpd_DEFINES += \
$${stara_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# httpd OBJECTIVE_HEADERS
#
#httpd_OBJECTIVE_HEADERS += \
#$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.hh \

# httpd OBJECTIVE_SOURCES
#
#httpd_OBJECTIVE_SOURCES += \
#$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.mm \

########################################################################
# httpd HEADERS
#
httpd_HEADERS += \
$${NADIR_SRC}/xos/app/console/output/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/output/base/main.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/input/base/main.hpp \
\
$${VERSA_SRC}/xos/app/console/protocol/base/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/base/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/client/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/client/main.hpp \
$${VERSA_SRC}/xos/app/console/protocol/server/main_opt.hpp \
$${VERSA_SRC}/xos/app/console/protocol/server/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.hpp \
\
$${STARA_SRC}/xos/protocol/xttp/message/header/content/disposition.hpp \
\
$${STARA_SRC}/xos/protocol/http/content/disposition/which.hpp \
$${STARA_SRC}/xos/protocol/http/content/disposition/name.hpp \
$${STARA_SRC}/xos/protocol/http/content/disposition/nameof.hpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/disposition.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/xttp/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/protocol/http/server/main.hpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/base/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/client/main.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main_opt.hpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main.hpp \

# httpd SOURCES
#
httpd_SOURCES += \
$${STARA_SRC}/xos/protocol/http/content/disposition/which.cpp \
$${STARA_SRC}/xos/protocol/http/content/disposition/name.cpp \
$${STARA_SRC}/xos/protocol/http/content/disposition/nameof.cpp \
$${STARA_SRC}/xos/protocol/http/message/header/content/disposition.cpp \
\
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main_opt.cpp \
$${STARA_SRC}/xos/app/console/network/sockets/protocol/http/server/main.cpp \

########################################################################
# httpd FRAMEWORKS
#
httpd_FRAMEWORKS += \
$${stara_FRAMEWORKS} \

# httpd LIBS
#
httpd_LIBS += \
$${stara_LIBS} \

########################################################################
# NO Qt
QT -= gui core

