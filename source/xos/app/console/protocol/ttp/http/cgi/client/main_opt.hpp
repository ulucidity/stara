//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 5/28/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/protocol/http/cgi/main.hpp"
#include "xos/app/console/network/sockets/protocol/ttp/client/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPT "restart"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTUSE "restart system"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_S "R"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_C 'R'
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPT "start"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTUSE "start system"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTVAL_S "S"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTVAL_C 'S'
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPT "stop"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTARG ""
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTUSE "stop system"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_S "T"
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_C 'T'
#define XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CGI_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CGI_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace ttp {
namespace http {
namespace cgi {
namespace client {

/// class main_optt
template 
<class TExtends = xos::app::console::protocol::http::cgi::maint
 <xos::app::console::protocol::http::cgi::main_optt
 <xos::app::console::network::sockets::protocol::ttp::client::maint
 <xos::app::console::network::sockets::protocol::ttp::client::main_optt
 <xos::app::console::network::sockets::protocol::ttp::base::maint
 <xos::app::console::network::sockets::protocol::ttp::base::main_optt
 <xos::app::console::network::sockets::client::maint
 <xos::app::console::network::sockets::client::main_optt
 <xos::app::console::network::sockets::base::maint
 <xos::app::console::network::sockets::base::main_optt
 <xos::app::console::network::client::maint
 <xos::app::console::network::client::main_optt
 <xos::app::console::network::base::maint
 <xos::app::console::network::base::main_optt
 <xos::app::console::protocol::ttp::client::maint
 <xos::app::console::protocol::ttp::client::main_optt
 <xos::app::console::protocol::ttp::base::maint
 <xos::app::console::protocol::ttp::base::main_optt
 <xos::app::console::protocol::client::maint
 <xos::app::console::protocol::client::main_optt
 <xos::app::console::protocol::base::maint
 <xos::app::console::protocol::base::main_optt<> > > > > > > > > > > > > > > > > > > > > >,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    typedef typename extends::sequence_char_t sequence_char_t;
    typedef typename extends::char_sequence_t char_sequence_t;
    typedef typename extends::char_seeker_t char_seeker_t;
    typedef typename extends::char_reader_t char_reader_t;
    typedef typename extends::char_writer_t char_writer_t;
    typedef typename extends::reader_string_t reader_string_t;
    typedef typename extends::string_reader_t string_reader_t;

    /// constructor / destructor
    main_optt()
    : run_(0),
      system_restart_option_(XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_RESTART_OPT),
      system_start_option_(XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_START_OPT),
      system_stop_option_(XOS_APP_CONSOLE_PROTOCOL_TTP_CLIENT_MAIN_SYSTEM_STOP_OPT) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    //////////////////////////////////////////////////////////////////////////
    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*run_)(argc, argv, env)))...");
            if (!(err = (this->*run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
            if (!(err = extends::run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(err" << err << " = extends::run(argc, argv, env)))");
            }
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...system...option...
    virtual string_t& set_system_restart_option(const string_t& to) {
        string_t& system_restart_option = this->system_restart_option();
        system_restart_option.assign(to);
        return system_restart_option;
    }
    virtual string_t& system_restart_option() const {
        return (string_t&) system_restart_option_;
    }
    virtual string_t& set_system_start_option(const string_t& to) {
        string_t& system_start_option = this->system_start_option();
        system_start_option.assign(to);
        return system_start_option;
    }
    virtual string_t& system_start_option() const {
        return (string_t&) system_start_option_;
    }
    virtual string_t& set_system_stop_option(const string_t& to) {
        string_t& system_stop_option = this->system_stop_option();
        system_stop_option.assign(to);
        return system_stop_option;
    }
    virtual string_t& system_stop_option() const {
        return (string_t&) system_stop_option_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    string_t system_restart_option_, system_start_option_, system_stop_option_;
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace client 
} /// namespace cgi 
} /// namespace http 
} /// namespace ttp 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_OPT_HPP

