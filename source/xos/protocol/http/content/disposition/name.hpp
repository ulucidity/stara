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
///   File: name.hpp
///
/// Author: $author$
///   Date: 2/1/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_PROTOCOL_HTTP_CONTENT_DISPOSITION_NAME_HPP
#define XOS_PROTOCOL_HTTP_CONTENT_DISPOSITION_NAME_HPP

#include "xos/protocol/http/content/disposition/which.hpp"

namespace xos {
namespace protocol {
namespace http {
namespace content {
namespace disposition {

//////////////////////////////////////////////////////////////////////////
/// class namet
template <class TExtends = xos::protocol::http::message::part, class TImplements = typename TExtends::implements>
class exported namet: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef namet derives;

    typedef extends part_t;
    typedef typename extends::string_t string_t;
    typedef typename string_t::char_t char_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;

    //////////////////////////////////////////////////////////////////////////
    /// constructor / destructor
    namet(const string_t &copy): extends(copy), which_(none) {
        separate();
    }
    namet(const char_t* chars, size_t length): extends(chars, length), which_(none) {
        separate();
    }
    namet(const char_t* chars): extends(chars), which_(none) {
        separate();
    }
    namet(which_t which): which_(which) {
        combine();
    }
    namet(const namet& copy): extends(copy), which_(copy.which_) {
    }
    namet(): which_(none) {
        combine();
    }
    virtual ~namet() {
    }

    //////////////////////////////////////////////////////////////////////////
    /// read / write
    virtual bool read(ssize_t& count, char_t& c, reader_t& reader) {
        bool success = false;
        ssize_t amount = 0;
        string_t chars;
        
        set_default();
        do {
            if (0 < (amount = reader.read(&c, 1))) {
                count += amount;
                if (('\r' != c) && ('\n' != c)) {
                    if ((' ' != c) && ('\t' != c) && ('\v' != c)) {
                        chars.append(&c, 1);
                    }
                } else {
                    break;
                }
            } else {
                count = amount;
                return false;
            }
        } while (0 < amount);
        if ((chars.has_chars())) {
            this->assign(chars);
            success = true;
        }
        return success;
    }
    virtual bool write(ssize_t& count, writer_t& writer) {
        bool success = this->write_this(count, writer);
        return success;
    }

    //////////////////////////////////////////////////////////////////////////
    /// combine / separate
    virtual bool combine() {
        bool success = true;
        set_name();
        return success;
    }
    virtual bool separate() {
        bool success = true;
        set_which();
        return success;
    }

    //////////////////////////////////////////////////////////////////////////
    /// set...
    using extends::set;
    virtual derives& set(which_t which) {
        this->assign(name_of_chars(which));
        return *this;
    }
    virtual derives& set_default() {
        this->assign(name_of_chars(which_ = default_which()));
        return *this;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...of...
    virtual which_t of_name(const string_t& name) const {
        return of_name(name.chars());
    }
    virtual which_t of_name(const char_t* name) const {
        return which::of_name(name);
    }
    virtual string_t name_of(which_t which) const {
        string name(name_of_chars(which));
        return name;
    }
    virtual const char_t* name_of_chars(which_t which) const {
        return which::name_of(which);
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...name / ...which
    virtual string_t set_name() {
        string_t name(name_of_chars(which_));
        this->assign(name);
        return name;
    }
    virtual which_t set_which() {
        which_ = of_name(this->chars());
        return which_;
    }
    virtual which_t which() const {
        return which_;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ...name_chars / ...which
    virtual const char_t* default_name_chars() const {
        return which::name_of_unknown();
    }
    virtual which_t default_which() const {
        return which::of_name_unknown();
    }

    //////////////////////////////////////////////////////////////////////////
protected:
    which_t which_;
}; /// class namet
typedef namet<> name;

} /// namespace disposition 
} /// namespace content 
} /// namespace http 
} /// namespace protocol 
} /// namespace xos 

#endif /// ndef XOS_PROTOCOL_HTTP_CONTENT_DISPOSITION_NAME_HPP

