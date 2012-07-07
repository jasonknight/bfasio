/**********************************************************\

  Auto-generated bfasioAPI.cpp

\**********************************************************/

#include "JSObject.h"
#include "variant_list.h"
#include "DOM/Document.h"
#include "global/config.h"

#include "bfasioAPI.h"

void bfasioAPI::_write(const std::string& path, const std::string& data, const FB::JSObjectPtr& callback) {
    std::string nono("..");
    size_t found;
    found = path.find(nono);
    if (found != std::string::npos) {
        callback->InvokeAsync("", FB::variant_list_of(false)("You cannot jump directories with .. "));
        return;
    }
    std::ofstream file(path.c_str());
    if (file.is_open()) {
        file << data;
        file.close();
        callback->InvokeAsync("", FB::variant_list_of(true));
    } else {
       callback->InvokeAsync("", FB::variant_list_of(false)("File could not be opened."));
    }
}
void bfasioAPI::_read(const std::string& path, const FB::JSObjectPtr& callback) {
    std::string nono("..");
    size_t found;
    found = path.find(nono);
    if (found != std::string::npos) {
        callback->InvokeAsync("", FB::variant_list_of(false)("You cannot jump directories with .. "));
        return;
    }
    std::ifstream file(path.c_str());
    if (file.is_open()) {
        std::string file_text(
            ( std::istreambuf_iterator<char>(file) ), std::istreambuf_iterator<char>()
        );
        callback->InvokeAsync( "", FB::variant_list_of(file_text) );
        file.close();
    } else {
       callback->InvokeAsync("", FB::variant_list_of(false)("File could not be opened."));
    }
}

///////////////////////////////////////////////////////////////////////////////
/// @fn FB::variant bfasioAPI::echo(const FB::variant& msg)
///
/// @brief  Echos whatever is passed from Javascript.
///         Go ahead and change it. See what happens!
///////////////////////////////////////////////////////////////////////////////
FB::variant bfasioAPI::echo(const FB::variant& msg)
{
    static int n(0);
    fire_echo("xxxSo far, you clicked this many times: ", n++);

    // return "foobar";
    return msg;
}

///////////////////////////////////////////////////////////////////////////////
/// @fn bfasioPtr bfasioAPI::getPlugin()
///
/// @brief  Gets a reference to the plugin that was passed in when the object
///         was created.  If the plugin has already been released then this
///         will throw a FB::script_error that will be translated into a
///         javascript exception in the page.
///////////////////////////////////////////////////////////////////////////////
bfasioPtr bfasioAPI::getPlugin()
{
    bfasioPtr plugin(m_plugin.lock());
    if (!plugin) {
        throw FB::script_error("The plugin is invalid");
    }
    return plugin;
}

// Read/Write property testString
std::string bfasioAPI::get_testString()
{
    return m_testString;
}

void bfasioAPI::set_testString(const std::string& val)
{
    m_testString = val;
}

// Read-only property version
std::string bfasioAPI::get_version()
{
    return FBSTRING_PLUGIN_VERSION;
}

void bfasioAPI::testEvent()
{
    fire_test();
}
