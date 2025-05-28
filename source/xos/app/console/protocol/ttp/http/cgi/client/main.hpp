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
///   File: main.hpp
///
/// Author: $author$
///   Date: 5/28/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_HPP

#include "xos/app/console/protocol/ttp/http/cgi/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace ttp {
namespace http {
namespace cgi {
namespace client {

/// class maint
template 
<class TExtends = xos::app::console::protocol::ttp::http::cgi::client::main_optt<>,  class TImplements = typename TExtends::implements>

class maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

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
    maint()
    : run_(0), 
      response_was_output_(false), 
      response_dont_output_(false), 

      action_form_field_name_("action"), 
      host_form_field_name_("host"), 
      port_form_field_name_("port"), 

      before_redirect_content_("<html><head><meta http-equiv=\"refresh\" content=\"1;url="), 
      between_redirect_content_("\"</meta></head><body><pre>"), 
      after_redirect_content_("</pre></body></html>"), 
      redirect_form_field_name_("redirect") {
    }
    virtual ~maint() {
    }
private:
    maint(const maint &copy) {
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
    /// ...any_action_console_gateway_run
    virtual int any_action_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t &request = this->request();
        LOGGER_IS_LOGGED_INFO("(!(err = this->all_connect_run(argc, argv, env)))...");
        if (!(err = this->all_connect_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->all_connect_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->all_connect_run(argc, argv, env)))");
        }
        LOGGER_IS_LOGGED_INFO("(!(response_was_output()))...");
        if (!(response_was_output())) {
            LOGGER_IS_LOGGED_INFO("...(!(response_was_output()))");
            LOGGER_IS_LOGGED_INFO("(!(response_dont_output()))...");
            if (!(response_dont_output())) {
                LOGGER_IS_LOGGED_INFO("...(!(response_dont_output()))");
                LOGGER_IS_LOGGED_INFO("(!(err = this->all_output_response_run(request, argc, argv, env)))...");
                if (!(err = this->all_output_response_run(request, argc, argv, env))) {
                    LOGGER_IS_LOGGED_INFO("...(!(" << err << " = this->all_output_response_run(request, argc, argv, env)))");
                } else {
                    LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = this->all_output_response_run(request, argc, argv, env)))");
                }
            } else {
            }
        } else {
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int system_restart_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& action_request = this->restart_request();
        string_t &request = this->request();

        LOGGER_IS_LOGGED_INFO("request.assign(\"" << action_request << "\")...");
        request.assign(action_request);

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int system_start_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& action_request = this->restart_request();
        string_t &request = this->request();

        LOGGER_IS_LOGGED_INFO("request.assign(\"" << action_request << "\")...");
        request.assign(action_request);

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...console_gateway_run
    virtual int system_stop_console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& action_request = this->stop_request();
        string_t &request = this->request();

        LOGGER_IS_LOGGED_INFO("request.assign(\"" << action_request << "\")...");
        request.assign(action_request);

        LOGGER_IS_LOGGED_INFO("(!(err = any_action_console_gateway_run(argc, argv, env)))...");
        if (!(err = any_action_console_gateway_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...(!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = any_action_console_gateway_run(argc, argv, env)))");
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int action_console_gateway_run(const string_t& action, int argc, char_t** argv, char_t** env) {
        int err = 0;
        int unequal = 0;
        const string_t& system_restart_option = this->system_restart_option();

        LOGGER_IS_LOGGED_INFO("(!(unequal = system_restart_option.compare(\"" << action << "\")))...");
        if (!(unequal = system_restart_option.compare(action))) {
            LOGGER_IS_LOGGED_INFO("err = system_restart_console_gateway_run(argc, argv, env)...");
            err = system_restart_console_gateway_run(argc, argv, env);
        } else {
            const string_t& system_start_option = this->system_start_option();

            LOGGER_IS_LOGGED_INFO("(!(unequal = system_start_option.compare(\"" << action << "\")))...");
            if (!(unequal = system_start_option.compare(action))) {
                LOGGER_IS_LOGGED_INFO("err = system_start_console_gateway_run(argc, argv, env)...");
                err = system_start_console_gateway_run(argc, argv, env);
            } else {
                const string_t& system_stop_option = this->system_stop_option();
                
                LOGGER_IS_LOGGED_INFO("(!(unequal = system_stop_option.compare(\"" << action << "\"))) ...");
                if (!(unequal = system_stop_option.compare(action))) {
                    LOGGER_IS_LOGGED_INFO("err = system_stop_console_gateway_run(argc, argv, env)...");
                    err = system_stop_console_gateway_run(argc, argv, env);
                } else {
                    LOGGER_IS_LOGGED_INFO("err = this->all_console_gateway_out_run(argc, argv, env)...");
                    err = this->all_console_gateway_out_run(argc, argv, env);
                }
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual int console_gateway_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& redirect_form_field_name = this->redirect_form_field_name();
        const string_t& action_form_field_name = this->action_form_field_name();
        const string_t& host_form_field_name = this->host_form_field_name();
        const string_t& port_form_field_name = this->port_form_field_name();
        const char_t* chars = 0;
        
        if ((chars = this->first_query_or_form_field_named_chars(host_form_field_name))) {
            const string_t host(chars);
            this->set_connect_host(host);
        } else {
        }
        if ((chars = this->first_query_or_form_field_named_chars(port_form_field_name))) {
            const string_t port(chars);
            this->set_connect_port(port.to_unsigned());
        } else {
        }
        if ((chars = this->first_query_or_form_field_named_chars(redirect_form_field_name))) {
            const string_t redirect(chars);
            this->set_redirect_form_field_value(redirect);
        } else {
        }
        if ((chars = this->first_query_or_form_field_named_chars(action_form_field_name))) {
            const string_t action(chars);
            err = action_console_gateway_run(action, argc, argv, env);
        } else {
            err = this->all_console_gateway_out_run(argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...output_response_run
    virtual int output_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        
        LOGGER_IS_LOGGED_INFO("((chars = this->redirect_form_field_value_chars(length)))...");
        if ((chars = this->redirect_form_field_value_chars(length))) {
            string_t& redirect_response = this->redirect_content();
            LOGGER_IS_LOGGED_INFO("...((\"" << chars << "\" = this->redirect_form_field_value_chars(" << length << ")))");
            this->set_content_type(this->redirect_content_type());
            redirect_response.assign(this->before_redirect_content());
            redirect_response.append(chars, length);
            redirect_response.append(this->between_redirect_content());
            redirect_response.append(response);
            redirect_response.append(this->after_redirect_content());
            LOGGER_IS_LOGGED_INFO("(!(err = extends::output_response_run(redirect_response = \"" << redirect_response << "\", argc, argv, env)))...");
            if (!(err = extends::output_response_run(redirect_response, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::output_response_run(redirect_response = \"" << redirect_response << "\", argc, argv, env)))");
                LOGGER_IS_LOGGED_INFO("set_response_was_output(true)...");
                set_response_was_output(true);
            } else {
                LOGGER_IS_LOGGED_ERROR("...failed on (!(" << err << " = extends::output_response_run(redirect_response = \"" << redirect_response << "\", argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on ((chars = this->redirect_form_field_value_chars(length)))");
            LOGGER_IS_LOGGED_INFO("(!(err = extends::output_response_run(response = \"" << response << "\", argc, argv, env)))...");
            if (!(err = extends::output_response_run(response, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::output_response_run(response = \"" << response << "\", argc, argv, env)))");
                LOGGER_IS_LOGGED_INFO("set_response_was_output(true)...");
                set_response_was_output(true);
            } else {
                LOGGER_IS_LOGGED_ERROR("...failed on (!(" << err << " = extends::output_response_run(response = \"" << response << "\", argc, argv, env)))");
            }
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// ...response_was_output...
    virtual bool& set_response_was_output(const bool& to) {
        bool& response_was_output = this->response_was_output();
        response_was_output = to;
        return response_was_output;
    }
    virtual bool& response_was_output() const {
        return (bool&) response_was_output_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...response_dont_output...
    virtual bool& set_response_dont_output(const bool& to) {
        bool& response_dont_output = this->response_dont_output();
        response_dont_output = to;
        return response_dont_output;
    }
    virtual bool& response_dont_output() const {
        return (bool&) response_dont_output_;
    }
    //////////////////////////////////////////////////////////////////////////
    /// ...form_field_name...
    virtual string_t& action_form_field_name() const {
        return (string_t&) action_form_field_name_;
    }
    virtual string_t& host_form_field_name() const {
        return (string_t&) host_form_field_name_;
    }
    virtual string_t& port_form_field_name() const {
        return (string_t&) port_form_field_name_;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    virtual string_t& before_redirect_content() const {
        return (string_t&) before_redirect_content_;
    }
    virtual string_t& between_redirect_content() const {
        return (string_t&) between_redirect_content_;
    }
    virtual string_t& after_redirect_content() const {
        return (string_t&) after_redirect_content_;
    }
    virtual string_t& redirect_content() const {
        return (string_t&) redirect_content_;
    }
    //////////////////////////////////////////////////////////////////////////
    virtual string_t& redirect_form_field_name() const {
        return (string_t&) redirect_form_field_name_;
    }
    virtual string_t& set_redirect_form_field_value(const string_t& to) {
        string_t& redirect_form_field_value = this->redirect_form_field_value();
        redirect_form_field_value.assign(to);
        return redirect_form_field_value;
    }
    virtual string_t& redirect_form_field_value() const {
        return (string_t&) redirect_form_field_value_;
    }
    virtual const char_t* redirect_form_field_value_chars(size_t& length) const {
        const string_t& redirect_form_field_value = this->redirect_form_field_value();
        const char_t* chars = redirect_form_field_value.has_chars(length);
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
    bool response_was_output_, response_dont_output_;
    string_t action_form_field_name_, host_form_field_name_, port_form_field_name_, 
             before_redirect_content_, between_redirect_content_, after_redirect_content_, 
             redirect_form_field_name_, redirect_form_field_value_, redirect_content_;
}; /// class maint 
typedef maint<> main;

} /// namespace client 
} /// namespace cgi 
} /// namespace http 
} /// namespace ttp 
} /// namespace protocol 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_TTP_HTTP_CGI_CLIENT_MAIN_HPP

