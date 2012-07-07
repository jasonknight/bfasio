/**********************************************************\

  Auto-generated bfasioAPI.h

\**********************************************************/

#include <string>
#include <sstream>
#include <boost/weak_ptr.hpp>
#include "JSAPIAuto.h"
#include "BrowserHost.h"
#include "bfasio.h"

#ifndef H_bfasioAPI
#define H_bfasioAPI

class bfasioAPI : public FB::JSAPIAuto
{
public:
    ////////////////////////////////////////////////////////////////////////////
    /// @fn bfasioAPI::bfasioAPI(const bfasioPtr& plugin, const FB::BrowserHostPtr host)
    ///
    /// @brief  Constructor for your JSAPI object.
    ///         You should register your methods, properties, and events
    ///         that should be accessible to Javascript from here.
    ///
    /// @see FB::JSAPIAuto::registerMethod
    /// @see FB::JSAPIAuto::registerProperty
    /// @see FB::JSAPIAuto::registerEvent
    ////////////////////////////////////////////////////////////////////////////
    bfasioAPI(const bfasioPtr& plugin, const FB::BrowserHostPtr& host) :
        m_plugin(plugin), m_host(host)
    {
        registerMethod("echo",      make_method(this, &bfasioAPI::echo));
        registerMethod("testEvent", make_method(this, &bfasioAPI::testEvent));
        
        // Read-write property
        registerProperty("testString",
                         make_property(this,
                                       &bfasioAPI::get_testString,
                                       &bfasioAPI::set_testString));
        
        // Read-only property
        registerProperty("version",
                         make_property(this,
                                       &bfasioAPI::get_version));
    }

    ///////////////////////////////////////////////////////////////////////////////
    /// @fn bfasioAPI::~bfasioAPI()
    ///
    /// @brief  Destructor.  Remember that this object will not be released until
    ///         the browser is done with it; this will almost definitely be after
    ///         the plugin is released.
    ///////////////////////////////////////////////////////////////////////////////
    virtual ~bfasioAPI() {};

    bfasioPtr getPlugin();

    // Read/Write property ${PROPERTY.ident}
    std::string get_testString();
    void set_testString(const std::string& val);

    // Read-only property ${PROPERTY.ident}
    std::string get_version();

    // Method echo
    FB::variant echo(const FB::variant& msg);
    
    // Event helpers
    FB_JSAPI_EVENT(test, 0, ());
    FB_JSAPI_EVENT(echo, 2, (const FB::variant&, const int));

    // Method test-event
    void testEvent();

private:
    bfasioWeakPtr m_plugin;
    FB::BrowserHostPtr m_host;

    std::string m_testString;
};

#endif // H_bfasioAPI

