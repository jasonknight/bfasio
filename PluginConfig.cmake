#/**********************************************************\ 
#
# Auto-Generated Plugin Configuration file
# for bfasio
#
#\**********************************************************/

set(PLUGIN_NAME "bfasio")
set(PLUGIN_PREFIX "bfa")
set(COMPANY_NAME "RedEToolsltd")

# ActiveX constants:
set(FBTYPELIB_NAME bfasioLib)
set(FBTYPELIB_DESC "bfasio 1.0 Type Library")
set(IFBControl_DESC "bfasio Control Interface")
set(FBControl_DESC "bfasio Control Class")
set(IFBComJavascriptObject_DESC "bfasio IComJavascriptObject Interface")
set(FBComJavascriptObject_DESC "bfasio ComJavascriptObject Class")
set(IFBComEventSource_DESC "bfasio IFBComEventSource Interface")
set(AXVERSION_NUM "1")

# NOTE: THESE GUIDS *MUST* BE UNIQUE TO YOUR PLUGIN/ACTIVEX CONTROL!  YES, ALL OF THEM!
set(FBTYPELIB_GUID acd4c2ef-737b-5e48-ae60-53e624d504dd)
set(IFBControl_GUID 7325ba33-7586-5448-a124-3ce01af5b834)
set(FBControl_GUID 3da71c9b-e8fc-5162-b051-4ea692067631)
set(IFBComJavascriptObject_GUID b6b19703-bece-5b21-b1d9-6079291771a4)
set(FBComJavascriptObject_GUID bc2810e7-7a1f-5986-acb6-ef5477352bec)
set(IFBComEventSource_GUID 9e6ccf30-a426-54f8-a306-9429bf56aeff)

# these are the pieces that are relevant to using it from Javascript
set(ACTIVEX_PROGID "RedEToolsltd.bfasio")
set(MOZILLA_PLUGINID "red-e.eu/bfasio")

# strings
set(FBSTRING_CompanyName "Red E Tools ltd.")
set(FBSTRING_PluginDescription "A Browser side ASIO library.")
set(FBSTRING_PLUGIN_VERSION "1.0.0.0")
set(FBSTRING_LegalCopyright "Copyright 2012 Red E Tools ltd.")
set(FBSTRING_PluginFileName "np${PLUGIN_NAME}.dll")
set(FBSTRING_ProductName "bfasio")
set(FBSTRING_FileExtents "")
set(FBSTRING_PluginName "bfasio")
set(FBSTRING_MIMEType "application/x-bfasio")

# Uncomment this next line if you're not planning on your plugin doing
# any drawing:

#set (FB_GUI_DISABLED 1)

# Mac plugin settings. If your plugin does not draw, set these all to 0
set(FBMAC_USE_QUICKDRAW 0)
set(FBMAC_USE_CARBON 1)
set(FBMAC_USE_COCOA 1)
set(FBMAC_USE_COREGRAPHICS 1)
set(FBMAC_USE_COREANIMATION 0)
set(FBMAC_USE_INVALIDATINGCOREANIMATION 0)

# If you want to register per-machine on Windows, uncomment this line
#set (FB_ATLREG_MACHINEWIDE 1)
