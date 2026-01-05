// CommentsTranslationProject: TRANSLATED


/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for ..\salamander.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __salamander_h_h__
#define __salamander_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __ISalamander_FWD_DEFINED__
#define __ISalamander_FWD_DEFINED__
typedef interface ISalamander ISalamander;

#endif 	/* __ISalamander_FWD_DEFINED__ */


#ifndef __ISalamanderPanel_FWD_DEFINED__
#define __ISalamanderPanel_FWD_DEFINED__
typedef interface ISalamanderPanel ISalamanderPanel;

#endif 	/* __ISalamanderPanel_FWD_DEFINED__ */


#ifndef __ISalamanderPanelItem_FWD_DEFINED__
#define __ISalamanderPanelItem_FWD_DEFINED__
typedef interface ISalamanderPanelItem ISalamanderPanelItem;

#endif 	/* __ISalamanderPanelItem_FWD_DEFINED__ */


#ifndef __ISalamanderPanelItemCollection_FWD_DEFINED__
#define __ISalamanderPanelItemCollection_FWD_DEFINED__
typedef interface ISalamanderPanelItemCollection ISalamanderPanelItemCollection;

#endif 	/* __ISalamanderPanelItemCollection_FWD_DEFINED__ */


#ifndef __ISalamanderProgressDialog_FWD_DEFINED__
#define __ISalamanderProgressDialog_FWD_DEFINED__
typedef interface ISalamanderProgressDialog ISalamanderProgressDialog;

#endif 	/* __ISalamanderProgressDialog_FWD_DEFINED__ */


#ifndef __ISalamanderWaitWindow_FWD_DEFINED__
#define __ISalamanderWaitWindow_FWD_DEFINED__
typedef interface ISalamanderWaitWindow ISalamanderWaitWindow;

#endif 	/* __ISalamanderWaitWindow_FWD_DEFINED__ */


#ifndef __ISalamanderScriptInfo_FWD_DEFINED__
#define __ISalamanderScriptInfo_FWD_DEFINED__
typedef interface ISalamanderScriptInfo ISalamanderScriptInfo;

#endif 	/* __ISalamanderScriptInfo_FWD_DEFINED__ */


#ifndef __ISalamanderGuiComponent_FWD_DEFINED__
#define __ISalamanderGuiComponent_FWD_DEFINED__
typedef interface ISalamanderGuiComponent ISalamanderGuiComponent;

#endif 	/* __ISalamanderGuiComponent_FWD_DEFINED__ */


#ifndef __ISalamanderGuiComponentInternal_FWD_DEFINED__
#define __ISalamanderGuiComponentInternal_FWD_DEFINED__
typedef interface ISalamanderGuiComponentInternal ISalamanderGuiComponentInternal;

#endif 	/* __ISalamanderGuiComponentInternal_FWD_DEFINED__ */


#ifndef __ISalamanderGuiCheckBox_FWD_DEFINED__
#define __ISalamanderGuiCheckBox_FWD_DEFINED__
typedef interface ISalamanderGuiCheckBox ISalamanderGuiCheckBox;

#endif 	/* __ISalamanderGuiCheckBox_FWD_DEFINED__ */


#ifndef __ISalamanderGuiButton_FWD_DEFINED__
#define __ISalamanderGuiButton_FWD_DEFINED__
typedef interface ISalamanderGuiButton ISalamanderGuiButton;

#endif 	/* __ISalamanderGuiButton_FWD_DEFINED__ */


#ifndef __ISalamanderGuiContainer_FWD_DEFINED__
#define __ISalamanderGuiContainer_FWD_DEFINED__
typedef interface ISalamanderGuiContainer ISalamanderGuiContainer;

#endif 	/* __ISalamanderGuiContainer_FWD_DEFINED__ */


#ifndef __ISalamanderGuiForm_FWD_DEFINED__
#define __ISalamanderGuiForm_FWD_DEFINED__
typedef interface ISalamanderGuiForm ISalamanderGuiForm;

#endif 	/* __ISalamanderGuiForm_FWD_DEFINED__ */


#ifndef __ISalamanderGui_FWD_DEFINED__
#define __ISalamanderGui_FWD_DEFINED__
typedef interface ISalamanderGui ISalamanderGui;

#endif 	/* __ISalamanderGui_FWD_DEFINED__ */


#ifndef __Salamander_FWD_DEFINED__
#define __Salamander_FWD_DEFINED__

#ifdef __cplusplus
typedef class Salamander Salamander;
#else
typedef struct Salamander Salamander;
#endif /* __cplusplus */

#endif 	/* __Salamander_FWD_DEFINED__ */


#ifndef __SalamanderPanel_FWD_DEFINED__
#define __SalamanderPanel_FWD_DEFINED__

#ifdef __cplusplus
typedef class SalamanderPanel SalamanderPanel;
#else
typedef struct SalamanderPanel SalamanderPanel;
#endif /* __cplusplus */

#endif 	/* __SalamanderPanel_FWD_DEFINED__ */


#ifndef __PanelItem_FWD_DEFINED__
#define __PanelItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class PanelItem PanelItem;
#else
typedef struct PanelItem PanelItem;
#endif /* __cplusplus */

#endif 	/* __PanelItem_FWD_DEFINED__ */


#ifndef __ItemCollection_FWD_DEFINED__
#define __ItemCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class ItemCollection ItemCollection;
#else
typedef struct ItemCollection ItemCollection;
#endif /* __cplusplus */

#endif 	/* __ItemCollection_FWD_DEFINED__ */


#ifndef __ProgressDialog_FWD_DEFINED__
#define __ProgressDialog_FWD_DEFINED__

#ifdef __cplusplus
typedef class ProgressDialog ProgressDialog;
#else
typedef struct ProgressDialog ProgressDialog;
#endif /* __cplusplus */

#endif 	/* __ProgressDialog_FWD_DEFINED__ */


#ifndef __WaitWindow_FWD_DEFINED__
#define __WaitWindow_FWD_DEFINED__

#ifdef __cplusplus
typedef class WaitWindow WaitWindow;
#else
typedef struct WaitWindow WaitWindow;
#endif /* __cplusplus */

#endif 	/* __WaitWindow_FWD_DEFINED__ */


#ifndef __ScriptInfo_FWD_DEFINED__
#define __ScriptInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class ScriptInfo ScriptInfo;
#else
typedef struct ScriptInfo ScriptInfo;
#endif /* __cplusplus */

#endif 	/* __ScriptInfo_FWD_DEFINED__ */


#ifndef __Form_FWD_DEFINED__
#define __Form_FWD_DEFINED__

#ifdef __cplusplus
typedef class Form Form;
#else
typedef struct Form Form;
#endif /* __cplusplus */

#endif 	/* __Form_FWD_DEFINED__ */


#ifndef __Button_FWD_DEFINED__
#define __Button_FWD_DEFINED__

#ifdef __cplusplus
typedef class Button Button;
#else
typedef struct Button Button;
#endif /* __cplusplus */

#endif 	/* __Button_FWD_DEFINED__ */


#ifndef __CheckBox_FWD_DEFINED__
#define __CheckBox_FWD_DEFINED__

#ifdef __cplusplus
typedef class CheckBox CheckBox;
#else
typedef struct CheckBox CheckBox;
#endif /* __cplusplus */

#endif 	/* __CheckBox_FWD_DEFINED__ */


#ifndef __TextBox_FWD_DEFINED__
#define __TextBox_FWD_DEFINED__

#ifdef __cplusplus
typedef class TextBox TextBox;
#else
typedef struct TextBox TextBox;
#endif /* __cplusplus */

#endif 	/* __TextBox_FWD_DEFINED__ */


#ifndef __Label_FWD_DEFINED__
#define __Label_FWD_DEFINED__

#ifdef __cplusplus
typedef class Label Label;
#else
typedef struct Label Label;
#endif /* __cplusplus */

#endif 	/* __Label_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_salamander_0000_0000 */
/* [local] */ 










extern RPC_IF_HANDLE __MIDL_itf_salamander_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_salamander_0000_0000_v0_0_s_ifspec;

#ifndef __ISalamander_INTERFACE_DEFINED__
#define __ISalamander_INTERFACE_DEFINED__

/* interface ISalamander */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamander;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60F57ABE-95C7-48c7-AE37-9DA007B8D57F")
    ISalamander : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MsgBox( 
            /* [in] */ BSTR prompt,
            /* [optional][in] */ VARIANT *buttons,
            /* [optional][in] */ VARIANT *title,
            /* [retval][out] */ int *result) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LeftPanel( 
            /* [retval][out] */ ISalamanderPanel **panel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_RightPanel( 
            /* [retval][out] */ ISalamanderPanel **panel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SourcePanel( 
            /* [retval][out] */ ISalamanderPanel **panel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TargetPanel( 
            /* [retval][out] */ ISalamanderPanel **panel) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ int *version) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InputBox( 
            /* [in] */ BSTR prompt,
            /* [optional][in] */ VARIANT *title,
            /* [optional][in] */ VARIANT *_default,
            /* [retval][out] */ BSTR *result) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowsVersion( 
            /* [retval][out] */ int *version) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_AutomationVersion( 
            /* [retval][out] */ int *version) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Sleep( 
            /* [in] */ int time) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AbortScript( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TraceI( 
            /* [in] */ BSTR message) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TraceE( 
            /* [in] */ BSTR message) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgressDialog( 
            /* [retval][out] */ ISalamanderProgressDialog **dialog) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WaitWindow( 
            /* [retval][out] */ ISalamanderWaitWindow **window) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ViewFile( 
            /* [in] */ BSTR file,
            /* [optional][in] */ VARIANT *cache) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE MatchesMask( 
            /* [in] */ BSTR file,
            /* [in] */ BSTR mask,
            /* [retval][out] */ VARIANT_BOOL *match) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DebugBreak( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ErrorDialog( 
            /* [in] */ VARIANT *file,
            /* [in] */ VARIANT *error,
            /* [in] */ int buttons,
            /* [optional][in] */ VARIANT *title,
            /* [retval][out] */ int *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE QuestionDialog( 
            /* [in] */ VARIANT *file,
            /* [in] */ BSTR question,
            /* [in] */ int buttons,
            /* [optional][in] */ VARIANT *title,
            /* [retval][out] */ int *result) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OverwriteDialog( 
            /* [in] */ VARIANT *file1,
            /* [in] */ VARIANT *file2,
            /* [in] */ int buttons,
            /* [retval][out] */ int *result) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Forms( 
            /* [retval][out] */ ISalamanderGui **gui) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetPersistentVal( 
            /* [in] */ BSTR key,
            /* [in] */ VARIANT *val) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetPersistentVal( 
            /* [in] */ BSTR key,
            /* [retval][out] */ VARIANT *val) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Script( 
            /* [retval][out] */ ISalamanderScriptInfo **info) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetFullPath( 
            /* [in] */ BSTR path,
            /* [optional][in] */ VARIANT *panel,
            /* [retval][out] */ BSTR *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamander * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamander * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamander * This);
        
        DECLSPEC_XFGVIRT(ISalamander, MsgBox)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MsgBox )( 
            ISalamander * This,
            /* [in] */ BSTR prompt,
            /* [optional][in] */ VARIANT *buttons,
            /* [optional][in] */ VARIANT *title,
            /* [retval][out] */ int *result);
        
        DECLSPEC_XFGVIRT(ISalamander, get_LeftPanel)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LeftPanel )( 
            ISalamander * This,
            /* [retval][out] */ ISalamanderPanel **panel);
        
        DECLSPEC_XFGVIRT(ISalamander, get_RightPanel)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RightPanel )( 
            ISalamander * This,
            /* [retval][out] */ ISalamanderPanel **panel);
        
        DECLSPEC_XFGVIRT(ISalamander, get_SourcePanel)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SourcePanel )( 
            ISalamander * This,
            /* [retval][out] */ ISalamanderPanel **panel);
        
        DECLSPEC_XFGVIRT(ISalamander, get_TargetPanel)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TargetPanel )( 
            ISalamander * This,
            /* [retval][out] */ ISalamanderPanel **panel);
        
        DECLSPEC_XFGVIRT(ISalamander, get_Version)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            ISalamander * This,
            /* [retval][out] */ int *version);
        
        DECLSPEC_XFGVIRT(ISalamander, InputBox)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InputBox )( 
            ISalamander * This,
            /* [in] */ BSTR prompt,
            /* [optional][in] */ VARIANT *title,
            /* [optional][in] */ VARIANT *_default,
            /* [retval][out] */ BSTR *result);
        
        DECLSPEC_XFGVIRT(ISalamander, get_WindowsVersion)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowsVersion )( 
            ISalamander * This,
            /* [retval][out] */ int *version);
        
        DECLSPEC_XFGVIRT(ISalamander, get_AutomationVersion)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_AutomationVersion )( 
            ISalamander * This,
            /* [retval][out] */ int *version);
        
        DECLSPEC_XFGVIRT(ISalamander, Sleep)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Sleep )( 
            ISalamander * This,
            /* [in] */ int time);
        
        DECLSPEC_XFGVIRT(ISalamander, AbortScript)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AbortScript )( 
            ISalamander * This);
        
        DECLSPEC_XFGVIRT(ISalamander, TraceI)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TraceI )( 
            ISalamander * This,
            /* [in] */ BSTR message);
        
        DECLSPEC_XFGVIRT(ISalamander, TraceE)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TraceE )( 
            ISalamander * This,
            /* [in] */ BSTR message);
        
        DECLSPEC_XFGVIRT(ISalamander, get_ProgressDialog)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgressDialog )( 
            ISalamander * This,
            /* [retval][out] */ ISalamanderProgressDialog **dialog);
        
        DECLSPEC_XFGVIRT(ISalamander, get_WaitWindow)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WaitWindow )( 
            ISalamander * This,
            /* [retval][out] */ ISalamanderWaitWindow **window);
        
        DECLSPEC_XFGVIRT(ISalamander, ViewFile)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ViewFile )( 
            ISalamander * This,
            /* [in] */ BSTR file,
            /* [optional][in] */ VARIANT *cache);
        
        DECLSPEC_XFGVIRT(ISalamander, MatchesMask)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *MatchesMask )( 
            ISalamander * This,
            /* [in] */ BSTR file,
            /* [in] */ BSTR mask,
            /* [retval][out] */ VARIANT_BOOL *match);
        
        DECLSPEC_XFGVIRT(ISalamander, DebugBreak)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DebugBreak )( 
            ISalamander * This);
        
        DECLSPEC_XFGVIRT(ISalamander, ErrorDialog)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ErrorDialog )( 
            ISalamander * This,
            /* [in] */ VARIANT *file,
            /* [in] */ VARIANT *error,
            /* [in] */ int buttons,
            /* [optional][in] */ VARIANT *title,
            /* [retval][out] */ int *result);
        
        DECLSPEC_XFGVIRT(ISalamander, QuestionDialog)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *QuestionDialog )( 
            ISalamander * This,
            /* [in] */ VARIANT *file,
            /* [in] */ BSTR question,
            /* [in] */ int buttons,
            /* [optional][in] */ VARIANT *title,
            /* [retval][out] */ int *result);
        
        DECLSPEC_XFGVIRT(ISalamander, OverwriteDialog)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OverwriteDialog )( 
            ISalamander * This,
            /* [in] */ VARIANT *file1,
            /* [in] */ VARIANT *file2,
            /* [in] */ int buttons,
            /* [retval][out] */ int *result);
        
        DECLSPEC_XFGVIRT(ISalamander, get_Forms)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Forms )( 
            ISalamander * This,
            /* [retval][out] */ ISalamanderGui **gui);
        
        DECLSPEC_XFGVIRT(ISalamander, SetPersistentVal)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetPersistentVal )( 
            ISalamander * This,
            /* [in] */ BSTR key,
            /* [in] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(ISalamander, GetPersistentVal)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPersistentVal )( 
            ISalamander * This,
            /* [in] */ BSTR key,
            /* [retval][out] */ VARIANT *val);
        
        DECLSPEC_XFGVIRT(ISalamander, get_Script)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Script )( 
            ISalamander * This,
            /* [retval][out] */ ISalamanderScriptInfo **info);
        
        DECLSPEC_XFGVIRT(ISalamander, GetFullPath)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetFullPath )( 
            ISalamander * This,
            /* [in] */ BSTR path,
            /* [optional][in] */ VARIANT *panel,
            /* [retval][out] */ BSTR *result);
        
        END_INTERFACE
    } ISalamanderVtbl;

    interface ISalamander
    {
        CONST_VTBL struct ISalamanderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamander_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamander_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamander_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamander_MsgBox(This,prompt,buttons,title,result)	\
    ( (This)->lpVtbl -> MsgBox(This,prompt,buttons,title,result) ) 

#define ISalamander_get_LeftPanel(This,panel)	\
    ( (This)->lpVtbl -> get_LeftPanel(This,panel) ) 

#define ISalamander_get_RightPanel(This,panel)	\
    ( (This)->lpVtbl -> get_RightPanel(This,panel) ) 

#define ISalamander_get_SourcePanel(This,panel)	\
    ( (This)->lpVtbl -> get_SourcePanel(This,panel) ) 

#define ISalamander_get_TargetPanel(This,panel)	\
    ( (This)->lpVtbl -> get_TargetPanel(This,panel) ) 

#define ISalamander_get_Version(This,version)	\
    ( (This)->lpVtbl -> get_Version(This,version) ) 

#define ISalamander_InputBox(This,prompt,title,_default,result)	\
    ( (This)->lpVtbl -> InputBox(This,prompt,title,_default,result) ) 

#define ISalamander_get_WindowsVersion(This,version)	\
    ( (This)->lpVtbl -> get_WindowsVersion(This,version) ) 

#define ISalamander_get_AutomationVersion(This,version)	\
    ( (This)->lpVtbl -> get_AutomationVersion(This,version) ) 

#define ISalamander_Sleep(This,time)	\
    ( (This)->lpVtbl -> Sleep(This,time) ) 

#define ISalamander_AbortScript(This)	\
    ( (This)->lpVtbl -> AbortScript(This) ) 

#define ISalamander_TraceI(This,message)	\
    ( (This)->lpVtbl -> TraceI(This,message) ) 

#define ISalamander_TraceE(This,message)	\
    ( (This)->lpVtbl -> TraceE(This,message) ) 

#define ISalamander_get_ProgressDialog(This,dialog)	\
    ( (This)->lpVtbl -> get_ProgressDialog(This,dialog) ) 

#define ISalamander_get_WaitWindow(This,window)	\
    ( (This)->lpVtbl -> get_WaitWindow(This,window) ) 

#define ISalamander_ViewFile(This,file,cache)	\
    ( (This)->lpVtbl -> ViewFile(This,file,cache) ) 

#define ISalamander_MatchesMask(This,file,mask,match)	\
    ( (This)->lpVtbl -> MatchesMask(This,file,mask,match) ) 

#define ISalamander_DebugBreak(This)	\
    ( (This)->lpVtbl -> DebugBreak(This) ) 

#define ISalamander_ErrorDialog(This,file,error,buttons,title,result)	\
    ( (This)->lpVtbl -> ErrorDialog(This,file,error,buttons,title,result) ) 

#define ISalamander_QuestionDialog(This,file,question,buttons,title,result)	\
    ( (This)->lpVtbl -> QuestionDialog(This,file,question,buttons,title,result) ) 

#define ISalamander_OverwriteDialog(This,file1,file2,buttons,result)	\
    ( (This)->lpVtbl -> OverwriteDialog(This,file1,file2,buttons,result) ) 

#define ISalamander_get_Forms(This,gui)	\
    ( (This)->lpVtbl -> get_Forms(This,gui) ) 

#define ISalamander_SetPersistentVal(This,key,val)	\
    ( (This)->lpVtbl -> SetPersistentVal(This,key,val) ) 

#define ISalamander_GetPersistentVal(This,key,val)	\
    ( (This)->lpVtbl -> GetPersistentVal(This,key,val) ) 

#define ISalamander_get_Script(This,info)	\
    ( (This)->lpVtbl -> get_Script(This,info) ) 

#define ISalamander_GetFullPath(This,path,panel,result)	\
    ( (This)->lpVtbl -> GetFullPath(This,path,panel,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamander_INTERFACE_DEFINED__ */


#ifndef __ISalamanderPanel_INTERFACE_DEFINED__
#define __ISalamanderPanel_INTERFACE_DEFINED__

/* interface ISalamanderPanel */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderPanel;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F51AF265-ADB1-40b7-B2CB-A258FDE6901E")
    ISalamanderPanel : public IUnknown
    {
    public:
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ BSTR path) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_FocusedItem( 
            /* [retval][out] */ ISalamanderPanelItem **item) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SelectedItems( 
            /* [retval][out] */ ISalamanderPanelItemCollection **coll) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Items( 
            /* [retval][out] */ ISalamanderPanelItemCollection **coll) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SelectAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DeselectAll( 
            /* [optional][in] */ VARIANT *save) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_PathType( 
            /* [retval][out] */ int *type) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StoreSelection( void) = 0;
        
        virtual /* [hidden][restricted][local][id] */ int STDMETHODCALLTYPE _GetPanelIndex( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderPanelVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderPanel * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderPanel * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderPanel * This);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, put_Path)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Path )( 
            ISalamanderPanel * This,
            /* [in] */ BSTR path);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, get_Path)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            ISalamanderPanel * This,
            /* [retval][out] */ BSTR *path);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, get_FocusedItem)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FocusedItem )( 
            ISalamanderPanel * This,
            /* [retval][out] */ ISalamanderPanelItem **item);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, get_SelectedItems)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SelectedItems )( 
            ISalamanderPanel * This,
            /* [retval][out] */ ISalamanderPanelItemCollection **coll);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, get_Items)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Items )( 
            ISalamanderPanel * This,
            /* [retval][out] */ ISalamanderPanelItemCollection **coll);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, SelectAll)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SelectAll )( 
            ISalamanderPanel * This);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, DeselectAll)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DeselectAll )( 
            ISalamanderPanel * This,
            /* [optional][in] */ VARIANT *save);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, get_PathType)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PathType )( 
            ISalamanderPanel * This,
            /* [retval][out] */ int *type);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, StoreSelection)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StoreSelection )( 
            ISalamanderPanel * This);
        
        DECLSPEC_XFGVIRT(ISalamanderPanel, _GetPanelIndex)
        /* [hidden][restricted][local][id] */ int ( STDMETHODCALLTYPE *_GetPanelIndex )( 
            ISalamanderPanel * This);
        
        END_INTERFACE
    } ISalamanderPanelVtbl;

    interface ISalamanderPanel
    {
        CONST_VTBL struct ISalamanderPanelVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderPanel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderPanel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderPanel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderPanel_put_Path(This,path)	\
    ( (This)->lpVtbl -> put_Path(This,path) ) 

#define ISalamanderPanel_get_Path(This,path)	\
    ( (This)->lpVtbl -> get_Path(This,path) ) 

#define ISalamanderPanel_get_FocusedItem(This,item)	\
    ( (This)->lpVtbl -> get_FocusedItem(This,item) ) 

#define ISalamanderPanel_get_SelectedItems(This,coll)	\
    ( (This)->lpVtbl -> get_SelectedItems(This,coll) ) 

#define ISalamanderPanel_get_Items(This,coll)	\
    ( (This)->lpVtbl -> get_Items(This,coll) ) 

#define ISalamanderPanel_SelectAll(This)	\
    ( (This)->lpVtbl -> SelectAll(This) ) 

#define ISalamanderPanel_DeselectAll(This,save)	\
    ( (This)->lpVtbl -> DeselectAll(This,save) ) 

#define ISalamanderPanel_get_PathType(This,type)	\
    ( (This)->lpVtbl -> get_PathType(This,type) ) 

#define ISalamanderPanel_StoreSelection(This)	\
    ( (This)->lpVtbl -> StoreSelection(This) ) 

#define ISalamanderPanel__GetPanelIndex(This)	\
    ( (This)->lpVtbl -> _GetPanelIndex(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderPanel_INTERFACE_DEFINED__ */


#ifndef __ISalamanderPanelItem_INTERFACE_DEFINED__
#define __ISalamanderPanelItem_INTERFACE_DEFINED__

/* interface ISalamanderPanelItem */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderPanelItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8CD33727-0A92-4560-80D7-1A4465120E9B")
    ISalamanderPanelItem : public IUnknown
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *path) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ VARIANT *size) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DateLastModified( 
            /* [retval][out] */ DATE *date) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Attributes( 
            /* [retval][out] */ int *attrs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderPanelItemVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderPanelItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderPanelItem * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderPanelItem * This);
        
        DECLSPEC_XFGVIRT(ISalamanderPanelItem, get_Name)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISalamanderPanelItem * This,
            /* [retval][out] */ BSTR *name);
        
        DECLSPEC_XFGVIRT(ISalamanderPanelItem, get_Path)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            ISalamanderPanelItem * This,
            /* [retval][out] */ BSTR *path);
        
        DECLSPEC_XFGVIRT(ISalamanderPanelItem, get_Size)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            ISalamanderPanelItem * This,
            /* [retval][out] */ VARIANT *size);
        
        DECLSPEC_XFGVIRT(ISalamanderPanelItem, get_DateLastModified)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DateLastModified )( 
            ISalamanderPanelItem * This,
            /* [retval][out] */ DATE *date);
        
        DECLSPEC_XFGVIRT(ISalamanderPanelItem, get_Attributes)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Attributes )( 
            ISalamanderPanelItem * This,
            /* [retval][out] */ int *attrs);
        
        END_INTERFACE
    } ISalamanderPanelItemVtbl;

    interface ISalamanderPanelItem
    {
        CONST_VTBL struct ISalamanderPanelItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderPanelItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderPanelItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderPanelItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderPanelItem_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define ISalamanderPanelItem_get_Path(This,path)	\
    ( (This)->lpVtbl -> get_Path(This,path) ) 

#define ISalamanderPanelItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define ISalamanderPanelItem_get_DateLastModified(This,date)	\
    ( (This)->lpVtbl -> get_DateLastModified(This,date) ) 

#define ISalamanderPanelItem_get_Attributes(This,attrs)	\
    ( (This)->lpVtbl -> get_Attributes(This,attrs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderPanelItem_INTERFACE_DEFINED__ */


#ifndef __ISalamanderPanelItemCollection_INTERFACE_DEFINED__
#define __ISalamanderPanelItemCollection_INTERFACE_DEFINED__

/* interface ISalamanderPanelItemCollection */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderPanelItemCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2B527FF9-DEAC-481a-9F2C-3E7B27ADCED8")
    ISalamanderPanelItemCollection : public IUnknown
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ VARIANT key,
            /* [retval][out] */ ISalamanderPanelItem **item) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *count) = 0;
        
        virtual /* [hidden][restricted][propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderPanelItemCollectionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderPanelItemCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderPanelItemCollection * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderPanelItemCollection * This);
        
        DECLSPEC_XFGVIRT(ISalamanderPanelItemCollection, get_Item)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ISalamanderPanelItemCollection * This,
            /* [in] */ VARIANT key,
            /* [retval][out] */ ISalamanderPanelItem **item);
        
        DECLSPEC_XFGVIRT(ISalamanderPanelItemCollection, get_Count)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ISalamanderPanelItemCollection * This,
            /* [retval][out] */ long *count);
        
        DECLSPEC_XFGVIRT(ISalamanderPanelItemCollection, get__NewEnum)
        /* [hidden][restricted][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            ISalamanderPanelItemCollection * This,
            /* [retval][out] */ IUnknown **ppenum);
        
        END_INTERFACE
    } ISalamanderPanelItemCollectionVtbl;

    interface ISalamanderPanelItemCollection
    {
        CONST_VTBL struct ISalamanderPanelItemCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderPanelItemCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderPanelItemCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderPanelItemCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderPanelItemCollection_get_Item(This,key,item)	\
    ( (This)->lpVtbl -> get_Item(This,key,item) ) 

#define ISalamanderPanelItemCollection_get_Count(This,count)	\
    ( (This)->lpVtbl -> get_Count(This,count) ) 

#define ISalamanderPanelItemCollection_get__NewEnum(This,ppenum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderPanelItemCollection_INTERFACE_DEFINED__ */


#ifndef __ISalamanderProgressDialog_INTERFACE_DEFINED__
#define __ISalamanderProgressDialog_INTERFACE_DEFINED__

/* interface ISalamanderProgressDialog */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderProgressDialog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C51EBE57-76B2-4c8c-A44B-13E34F846F2E")
    ISalamanderProgressDialog : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Show( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Hide( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *title) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR title) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddText( 
            /* [in] */ BSTR text) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCancelled( 
            /* [retval][out] */ VARIANT_BOOL *cancelled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Position( 
            /* [retval][out] */ VARIANT *position) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Position( 
            /* [in] */ VARIANT *position) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TotalPosition( 
            /* [retval][out] */ VARIANT *position) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_TotalPosition( 
            /* [in] */ VARIANT *position) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Step( 
            /* [in] */ int step) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CanCancel( 
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CanCancel( 
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Style( 
            /* [retval][out] */ int *barcount) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Style( 
            /* [in] */ int barcount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Maximum( 
            /* [retval][out] */ VARIANT *max) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Maximum( 
            /* [in] */ VARIANT *max) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_TotalMaximum( 
            /* [retval][out] */ VARIANT *max) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_TotalMaximum( 
            /* [in] */ VARIANT *max) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderProgressDialogVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderProgressDialog * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderProgressDialog * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderProgressDialog * This);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, Show)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            ISalamanderProgressDialog * This);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, Hide)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Hide )( 
            ISalamanderProgressDialog * This);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, get_Title)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ISalamanderProgressDialog * This,
            /* [retval][out] */ BSTR *title);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, put_Title)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            ISalamanderProgressDialog * This,
            /* [in] */ BSTR title);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, AddText)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddText )( 
            ISalamanderProgressDialog * This,
            /* [in] */ BSTR text);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, get_IsCancelled)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCancelled )( 
            ISalamanderProgressDialog * This,
            /* [retval][out] */ VARIANT_BOOL *cancelled);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, get_Position)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Position )( 
            ISalamanderProgressDialog * This,
            /* [retval][out] */ VARIANT *position);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, put_Position)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Position )( 
            ISalamanderProgressDialog * This,
            /* [in] */ VARIANT *position);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, get_TotalPosition)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TotalPosition )( 
            ISalamanderProgressDialog * This,
            /* [retval][out] */ VARIANT *position);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, put_TotalPosition)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TotalPosition )( 
            ISalamanderProgressDialog * This,
            /* [in] */ VARIANT *position);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, Step)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Step )( 
            ISalamanderProgressDialog * This,
            /* [in] */ int step);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, get_CanCancel)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanCancel )( 
            ISalamanderProgressDialog * This,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, put_CanCancel)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CanCancel )( 
            ISalamanderProgressDialog * This,
            /* [in] */ VARIANT_BOOL enabled);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, get_Style)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Style )( 
            ISalamanderProgressDialog * This,
            /* [retval][out] */ int *barcount);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, put_Style)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Style )( 
            ISalamanderProgressDialog * This,
            /* [in] */ int barcount);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, get_Maximum)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Maximum )( 
            ISalamanderProgressDialog * This,
            /* [retval][out] */ VARIANT *max);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, put_Maximum)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Maximum )( 
            ISalamanderProgressDialog * This,
            /* [in] */ VARIANT *max);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, get_TotalMaximum)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TotalMaximum )( 
            ISalamanderProgressDialog * This,
            /* [retval][out] */ VARIANT *max);
        
        DECLSPEC_XFGVIRT(ISalamanderProgressDialog, put_TotalMaximum)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TotalMaximum )( 
            ISalamanderProgressDialog * This,
            /* [in] */ VARIANT *max);
        
        END_INTERFACE
    } ISalamanderProgressDialogVtbl;

    interface ISalamanderProgressDialog
    {
        CONST_VTBL struct ISalamanderProgressDialogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderProgressDialog_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderProgressDialog_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderProgressDialog_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderProgressDialog_Show(This)	\
    ( (This)->lpVtbl -> Show(This) ) 

#define ISalamanderProgressDialog_Hide(This)	\
    ( (This)->lpVtbl -> Hide(This) ) 

#define ISalamanderProgressDialog_get_Title(This,title)	\
    ( (This)->lpVtbl -> get_Title(This,title) ) 

#define ISalamanderProgressDialog_put_Title(This,title)	\
    ( (This)->lpVtbl -> put_Title(This,title) ) 

#define ISalamanderProgressDialog_AddText(This,text)	\
    ( (This)->lpVtbl -> AddText(This,text) ) 

#define ISalamanderProgressDialog_get_IsCancelled(This,cancelled)	\
    ( (This)->lpVtbl -> get_IsCancelled(This,cancelled) ) 

#define ISalamanderProgressDialog_get_Position(This,position)	\
    ( (This)->lpVtbl -> get_Position(This,position) ) 

#define ISalamanderProgressDialog_put_Position(This,position)	\
    ( (This)->lpVtbl -> put_Position(This,position) ) 

#define ISalamanderProgressDialog_get_TotalPosition(This,position)	\
    ( (This)->lpVtbl -> get_TotalPosition(This,position) ) 

#define ISalamanderProgressDialog_put_TotalPosition(This,position)	\
    ( (This)->lpVtbl -> put_TotalPosition(This,position) ) 

#define ISalamanderProgressDialog_Step(This,step)	\
    ( (This)->lpVtbl -> Step(This,step) ) 

#define ISalamanderProgressDialog_get_CanCancel(This,enabled)	\
    ( (This)->lpVtbl -> get_CanCancel(This,enabled) ) 

#define ISalamanderProgressDialog_put_CanCancel(This,enabled)	\
    ( (This)->lpVtbl -> put_CanCancel(This,enabled) ) 

#define ISalamanderProgressDialog_get_Style(This,barcount)	\
    ( (This)->lpVtbl -> get_Style(This,barcount) ) 

#define ISalamanderProgressDialog_put_Style(This,barcount)	\
    ( (This)->lpVtbl -> put_Style(This,barcount) ) 

#define ISalamanderProgressDialog_get_Maximum(This,max)	\
    ( (This)->lpVtbl -> get_Maximum(This,max) ) 

#define ISalamanderProgressDialog_put_Maximum(This,max)	\
    ( (This)->lpVtbl -> put_Maximum(This,max) ) 

#define ISalamanderProgressDialog_get_TotalMaximum(This,max)	\
    ( (This)->lpVtbl -> get_TotalMaximum(This,max) ) 

#define ISalamanderProgressDialog_put_TotalMaximum(This,max)	\
    ( (This)->lpVtbl -> put_TotalMaximum(This,max) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderProgressDialog_INTERFACE_DEFINED__ */


#ifndef __ISalamanderWaitWindow_INTERFACE_DEFINED__
#define __ISalamanderWaitWindow_INTERFACE_DEFINED__

/* interface ISalamanderWaitWindow */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderWaitWindow;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("77CD7E2F-5B62-451d-AB3D-812F8B9FCBA8")
    ISalamanderWaitWindow : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Show( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Hide( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Title( 
            /* [retval][out] */ BSTR *title) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Title( 
            /* [in] */ BSTR title) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *text) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR text) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCancelled( 
            /* [retval][out] */ VARIANT_BOOL *cancelled) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Delay( 
            /* [retval][out] */ int *ms) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Delay( 
            /* [in] */ int ms) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_CanCancel( 
            /* [retval][out] */ VARIANT_BOOL *enabled) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_CanCancel( 
            /* [in] */ VARIANT_BOOL enabled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderWaitWindowVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderWaitWindow * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderWaitWindow * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderWaitWindow * This);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, Show)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Show )( 
            ISalamanderWaitWindow * This);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, Hide)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Hide )( 
            ISalamanderWaitWindow * This);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, get_Title)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Title )( 
            ISalamanderWaitWindow * This,
            /* [retval][out] */ BSTR *title);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, put_Title)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Title )( 
            ISalamanderWaitWindow * This,
            /* [in] */ BSTR title);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, get_Text)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISalamanderWaitWindow * This,
            /* [retval][out] */ BSTR *text);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, put_Text)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            ISalamanderWaitWindow * This,
            /* [in] */ BSTR text);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, get_IsCancelled)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCancelled )( 
            ISalamanderWaitWindow * This,
            /* [retval][out] */ VARIANT_BOOL *cancelled);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, get_Delay)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Delay )( 
            ISalamanderWaitWindow * This,
            /* [retval][out] */ int *ms);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, put_Delay)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Delay )( 
            ISalamanderWaitWindow * This,
            /* [in] */ int ms);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, get_CanCancel)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CanCancel )( 
            ISalamanderWaitWindow * This,
            /* [retval][out] */ VARIANT_BOOL *enabled);
        
        DECLSPEC_XFGVIRT(ISalamanderWaitWindow, put_CanCancel)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_CanCancel )( 
            ISalamanderWaitWindow * This,
            /* [in] */ VARIANT_BOOL enabled);
        
        END_INTERFACE
    } ISalamanderWaitWindowVtbl;

    interface ISalamanderWaitWindow
    {
        CONST_VTBL struct ISalamanderWaitWindowVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderWaitWindow_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderWaitWindow_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderWaitWindow_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderWaitWindow_Show(This)	\
    ( (This)->lpVtbl -> Show(This) ) 

#define ISalamanderWaitWindow_Hide(This)	\
    ( (This)->lpVtbl -> Hide(This) ) 

#define ISalamanderWaitWindow_get_Title(This,title)	\
    ( (This)->lpVtbl -> get_Title(This,title) ) 

#define ISalamanderWaitWindow_put_Title(This,title)	\
    ( (This)->lpVtbl -> put_Title(This,title) ) 

#define ISalamanderWaitWindow_get_Text(This,text)	\
    ( (This)->lpVtbl -> get_Text(This,text) ) 

#define ISalamanderWaitWindow_put_Text(This,text)	\
    ( (This)->lpVtbl -> put_Text(This,text) ) 

#define ISalamanderWaitWindow_get_IsCancelled(This,cancelled)	\
    ( (This)->lpVtbl -> get_IsCancelled(This,cancelled) ) 

#define ISalamanderWaitWindow_get_Delay(This,ms)	\
    ( (This)->lpVtbl -> get_Delay(This,ms) ) 

#define ISalamanderWaitWindow_put_Delay(This,ms)	\
    ( (This)->lpVtbl -> put_Delay(This,ms) ) 

#define ISalamanderWaitWindow_get_CanCancel(This,enabled)	\
    ( (This)->lpVtbl -> get_CanCancel(This,enabled) ) 

#define ISalamanderWaitWindow_put_CanCancel(This,enabled)	\
    ( (This)->lpVtbl -> put_CanCancel(This,enabled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderWaitWindow_INTERFACE_DEFINED__ */


#ifndef __ISalamanderScriptInfo_INTERFACE_DEFINED__
#define __ISalamanderScriptInfo_INTERFACE_DEFINED__

/* interface ISalamanderScriptInfo */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderScriptInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("99DBFA2F-9699-40eb-ACEE-B890908AA583")
    ISalamanderScriptInfo : public IUnknown
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *name) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *path) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderScriptInfoVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderScriptInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderScriptInfo * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderScriptInfo * This);
        
        DECLSPEC_XFGVIRT(ISalamanderScriptInfo, get_Name)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            ISalamanderScriptInfo * This,
            /* [retval][out] */ BSTR *name);
        
        DECLSPEC_XFGVIRT(ISalamanderScriptInfo, get_Path)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            ISalamanderScriptInfo * This,
            /* [retval][out] */ BSTR *path);
        
        END_INTERFACE
    } ISalamanderScriptInfoVtbl;

    interface ISalamanderScriptInfo
    {
        CONST_VTBL struct ISalamanderScriptInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderScriptInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderScriptInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderScriptInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderScriptInfo_get_Name(This,name)	\
    ( (This)->lpVtbl -> get_Name(This,name) ) 

#define ISalamanderScriptInfo_get_Path(This,path)	\
    ( (This)->lpVtbl -> get_Path(This,path) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderScriptInfo_INTERFACE_DEFINED__ */


#ifndef __ISalamanderGuiComponent_INTERFACE_DEFINED__
#define __ISalamanderGuiComponent_INTERFACE_DEFINED__

/* interface ISalamanderGuiComponent */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderGuiComponent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15711C8C-52B3-4a0b-90B0-123C8A0D525B")
    ISalamanderGuiComponent : public IUnknown
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Text( 
            /* [retval][out] */ BSTR *text) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Text( 
            /* [in] */ BSTR text) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderGuiComponentVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderGuiComponent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderGuiComponent * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderGuiComponent * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, get_Text)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISalamanderGuiComponent * This,
            /* [retval][out] */ BSTR *text);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, put_Text)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            ISalamanderGuiComponent * This,
            /* [in] */ BSTR text);
        
        END_INTERFACE
    } ISalamanderGuiComponentVtbl;

    interface ISalamanderGuiComponent
    {
        CONST_VTBL struct ISalamanderGuiComponentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderGuiComponent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderGuiComponent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderGuiComponent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderGuiComponent_get_Text(This,text)	\
    ( (This)->lpVtbl -> get_Text(This,text) ) 

#define ISalamanderGuiComponent_put_Text(This,text)	\
    ( (This)->lpVtbl -> put_Text(This,text) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderGuiComponent_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_salamander_0000_0008 */
/* [local] */ 


enum SALGUI_CLASS
    {
        SALGUI_FORM	= 1,
        SALGUI_BUTTON	= 2,
        SALGUI_CHECKBOX	= 3,
        SALGUI_TEXTBOX	= 4,
        SALGUI_LABEL	= 5
    } ;
struct SALGUI_BOUNDS
    {
    int x;
    int y;
    int cx;
    int cy;
    } ;

enum SALGUI_STYLE
    {
        SALGUI_STYLE_AUTOLAYOUT	= 1,
        SALGUI_STYLE_FULLWIDTH	= 2
    } ;


extern RPC_IF_HANDLE __MIDL_itf_salamander_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_salamander_0000_0008_v0_0_s_ifspec;

#ifndef __ISalamanderGuiComponentInternal_INTERFACE_DEFINED__
#define __ISalamanderGuiComponentInternal_INTERFACE_DEFINED__

/* interface ISalamanderGuiComponentInternal */
/* [object][unique][uuid][local] */ 


EXTERN_C const IID IID_ISalamanderGuiComponentInternal;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("037905FB-A081-4a60-AE61-C848177F99E0")
    ISalamanderGuiComponentInternal : public IUnknown
    {
    public:
        virtual LPCOLESTR STDMETHODCALLTYPE GetMemberName( void) = 0;
        
        virtual DISPID STDMETHODCALLTYPE GetMemberId( void) = 0;
        
        virtual void STDMETHODCALLTYPE SetMember( 
            LPCOLESTR pszName,
            DISPID dispid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSibling( 
            /* [out] */ ISalamanderGuiComponentInternal **ppComponent) = 0;
        
        virtual void STDMETHODCALLTYPE GetBounds( 
            /* [out] */ struct SALGUI_BOUNDS *bounds) = 0;
        
        virtual void STDMETHODCALLTYPE SetBounds( 
            const struct SALGUI_BOUNDS *bounds) = 0;
        
        virtual enum SALGUI_CLASS STDMETHODCALLTYPE GetClass( void) = 0;
        
        virtual void STDMETHODCALLTYPE RemoveSelf( void) = 0;
        
        virtual void STDMETHODCALLTYPE RemoveComponent( 
            ISalamanderGuiComponentInternal *pComponent) = 0;
        
        virtual void STDMETHODCALLTYPE AddComponent( 
            ISalamanderGuiComponentInternal *pComponent) = 0;
        
        virtual void STDMETHODCALLTYPE SetParent( 
            ISalamanderGuiComponentInternal *pParent) = 0;
        
        virtual void STDMETHODCALLTYPE SetSibling( 
            ISalamanderGuiComponentInternal *pSibling) = 0;
        
        virtual HWND STDMETHODCALLTYPE Create( void) = 0;
        
        virtual HWND STDMETHODCALLTYPE GetHwnd( void) = 0;
        
        virtual LRESULT STDMETHODCALLTYPE OnMessage( 
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam) = 0;
        
        virtual void STDMETHODCALLTYPE TransferDataToWindow( void) = 0;
        
        virtual void STDMETHODCALLTYPE TransferDataFromWindow( void) = 0;
        
        virtual void STDMETHODCALLTYPE RecalcBounds( 
            HWND hWnd,
            HDC hDC) = 0;
        
        virtual void STDMETHODCALLTYPE BoundsToPixels( 
            /* [out][in] */ struct SALGUI_BOUNDS *bounds) = 0;
        
        virtual void STDMETHODCALLTYPE PixelsToBounds( 
            /* [out][in] */ struct SALGUI_BOUNDS *bounds) = 0;
        
        virtual void STDMETHODCALLTYPE AutosizeComponent( 
            ISalamanderGuiComponentInternal *pComponent) = 0;
        
        virtual UINT STDMETHODCALLTYPE GetStyle( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderGuiComponentInternalVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderGuiComponentInternal * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, GetMemberName)
        LPCOLESTR ( STDMETHODCALLTYPE *GetMemberName )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, GetMemberId)
        DISPID ( STDMETHODCALLTYPE *GetMemberId )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, SetMember)
        void ( STDMETHODCALLTYPE *SetMember )( 
            ISalamanderGuiComponentInternal * This,
            LPCOLESTR pszName,
            DISPID dispid);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, GetSibling)
        HRESULT ( STDMETHODCALLTYPE *GetSibling )( 
            ISalamanderGuiComponentInternal * This,
            /* [out] */ ISalamanderGuiComponentInternal **ppComponent);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, GetBounds)
        void ( STDMETHODCALLTYPE *GetBounds )( 
            ISalamanderGuiComponentInternal * This,
            /* [out] */ struct SALGUI_BOUNDS *bounds);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, SetBounds)
        void ( STDMETHODCALLTYPE *SetBounds )( 
            ISalamanderGuiComponentInternal * This,
            const struct SALGUI_BOUNDS *bounds);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, GetClass)
        enum SALGUI_CLASS ( STDMETHODCALLTYPE *GetClass )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, RemoveSelf)
        void ( STDMETHODCALLTYPE *RemoveSelf )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, RemoveComponent)
        void ( STDMETHODCALLTYPE *RemoveComponent )( 
            ISalamanderGuiComponentInternal * This,
            ISalamanderGuiComponentInternal *pComponent);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, AddComponent)
        void ( STDMETHODCALLTYPE *AddComponent )( 
            ISalamanderGuiComponentInternal * This,
            ISalamanderGuiComponentInternal *pComponent);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, SetParent)
        void ( STDMETHODCALLTYPE *SetParent )( 
            ISalamanderGuiComponentInternal * This,
            ISalamanderGuiComponentInternal *pParent);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, SetSibling)
        void ( STDMETHODCALLTYPE *SetSibling )( 
            ISalamanderGuiComponentInternal * This,
            ISalamanderGuiComponentInternal *pSibling);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, Create)
        HWND ( STDMETHODCALLTYPE *Create )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, GetHwnd)
        HWND ( STDMETHODCALLTYPE *GetHwnd )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, OnMessage)
        LRESULT ( STDMETHODCALLTYPE *OnMessage )( 
            ISalamanderGuiComponentInternal * This,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, TransferDataToWindow)
        void ( STDMETHODCALLTYPE *TransferDataToWindow )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, TransferDataFromWindow)
        void ( STDMETHODCALLTYPE *TransferDataFromWindow )( 
            ISalamanderGuiComponentInternal * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, RecalcBounds)
        void ( STDMETHODCALLTYPE *RecalcBounds )( 
            ISalamanderGuiComponentInternal * This,
            HWND hWnd,
            HDC hDC);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, BoundsToPixels)
        void ( STDMETHODCALLTYPE *BoundsToPixels )( 
            ISalamanderGuiComponentInternal * This,
            /* [out][in] */ struct SALGUI_BOUNDS *bounds);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, PixelsToBounds)
        void ( STDMETHODCALLTYPE *PixelsToBounds )( 
            ISalamanderGuiComponentInternal * This,
            /* [out][in] */ struct SALGUI_BOUNDS *bounds);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, AutosizeComponent)
        void ( STDMETHODCALLTYPE *AutosizeComponent )( 
            ISalamanderGuiComponentInternal * This,
            ISalamanderGuiComponentInternal *pComponent);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponentInternal, GetStyle)
        UINT ( STDMETHODCALLTYPE *GetStyle )( 
            ISalamanderGuiComponentInternal * This);
        
        END_INTERFACE
    } ISalamanderGuiComponentInternalVtbl;

    interface ISalamanderGuiComponentInternal
    {
        CONST_VTBL struct ISalamanderGuiComponentInternalVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderGuiComponentInternal_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderGuiComponentInternal_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderGuiComponentInternal_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderGuiComponentInternal_GetMemberName(This)	\
    ( (This)->lpVtbl -> GetMemberName(This) ) 

#define ISalamanderGuiComponentInternal_GetMemberId(This)	\
    ( (This)->lpVtbl -> GetMemberId(This) ) 

#define ISalamanderGuiComponentInternal_SetMember(This,pszName,dispid)	\
    ( (This)->lpVtbl -> SetMember(This,pszName,dispid) ) 

#define ISalamanderGuiComponentInternal_GetSibling(This,ppComponent)	\
    ( (This)->lpVtbl -> GetSibling(This,ppComponent) ) 

#define ISalamanderGuiComponentInternal_GetBounds(This,bounds)	\
    ( (This)->lpVtbl -> GetBounds(This,bounds) ) 

#define ISalamanderGuiComponentInternal_SetBounds(This,bounds)	\
    ( (This)->lpVtbl -> SetBounds(This,bounds) ) 

#define ISalamanderGuiComponentInternal_GetClass(This)	\
    ( (This)->lpVtbl -> GetClass(This) ) 

#define ISalamanderGuiComponentInternal_RemoveSelf(This)	\
    ( (This)->lpVtbl -> RemoveSelf(This) ) 

#define ISalamanderGuiComponentInternal_RemoveComponent(This,pComponent)	\
    ( (This)->lpVtbl -> RemoveComponent(This,pComponent) ) 

#define ISalamanderGuiComponentInternal_AddComponent(This,pComponent)	\
    ( (This)->lpVtbl -> AddComponent(This,pComponent) ) 

#define ISalamanderGuiComponentInternal_SetParent(This,pParent)	\
    ( (This)->lpVtbl -> SetParent(This,pParent) ) 

#define ISalamanderGuiComponentInternal_SetSibling(This,pSibling)	\
    ( (This)->lpVtbl -> SetSibling(This,pSibling) ) 

#define ISalamanderGuiComponentInternal_Create(This)	\
    ( (This)->lpVtbl -> Create(This) ) 

#define ISalamanderGuiComponentInternal_GetHwnd(This)	\
    ( (This)->lpVtbl -> GetHwnd(This) ) 

#define ISalamanderGuiComponentInternal_OnMessage(This,uMsg,wParam,lParam)	\
    ( (This)->lpVtbl -> OnMessage(This,uMsg,wParam,lParam) ) 

#define ISalamanderGuiComponentInternal_TransferDataToWindow(This)	\
    ( (This)->lpVtbl -> TransferDataToWindow(This) ) 

#define ISalamanderGuiComponentInternal_TransferDataFromWindow(This)	\
    ( (This)->lpVtbl -> TransferDataFromWindow(This) ) 

#define ISalamanderGuiComponentInternal_RecalcBounds(This,hWnd,hDC)	\
    ( (This)->lpVtbl -> RecalcBounds(This,hWnd,hDC) ) 

#define ISalamanderGuiComponentInternal_BoundsToPixels(This,bounds)	\
    ( (This)->lpVtbl -> BoundsToPixels(This,bounds) ) 

#define ISalamanderGuiComponentInternal_PixelsToBounds(This,bounds)	\
    ( (This)->lpVtbl -> PixelsToBounds(This,bounds) ) 

#define ISalamanderGuiComponentInternal_AutosizeComponent(This,pComponent)	\
    ( (This)->lpVtbl -> AutosizeComponent(This,pComponent) ) 

#define ISalamanderGuiComponentInternal_GetStyle(This)	\
    ( (This)->lpVtbl -> GetStyle(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderGuiComponentInternal_INTERFACE_DEFINED__ */


#ifndef __ISalamanderGuiCheckBox_INTERFACE_DEFINED__
#define __ISalamanderGuiCheckBox_INTERFACE_DEFINED__

/* interface ISalamanderGuiCheckBox */
/* [oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderGuiCheckBox;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A26789BB-CAA4-47d5-BCC5-386EF24220D4")
    ISalamanderGuiCheckBox : public ISalamanderGuiComponent
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Checked( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_Checked( 
            /* [in] */ VARIANT_BOOL val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderGuiCheckBoxVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderGuiCheckBox * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderGuiCheckBox * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderGuiCheckBox * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, get_Text)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISalamanderGuiCheckBox * This,
            /* [retval][out] */ BSTR *text);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, put_Text)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            ISalamanderGuiCheckBox * This,
            /* [in] */ BSTR text);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiCheckBox, get_Checked)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Checked )( 
            ISalamanderGuiCheckBox * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiCheckBox, put_Checked)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Checked )( 
            ISalamanderGuiCheckBox * This,
            /* [in] */ VARIANT_BOOL val);
        
        END_INTERFACE
    } ISalamanderGuiCheckBoxVtbl;

    interface ISalamanderGuiCheckBox
    {
        CONST_VTBL struct ISalamanderGuiCheckBoxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderGuiCheckBox_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderGuiCheckBox_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderGuiCheckBox_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderGuiCheckBox_get_Text(This,text)	\
    ( (This)->lpVtbl -> get_Text(This,text) ) 

#define ISalamanderGuiCheckBox_put_Text(This,text)	\
    ( (This)->lpVtbl -> put_Text(This,text) ) 


#define ISalamanderGuiCheckBox_get_Checked(This,val)	\
    ( (This)->lpVtbl -> get_Checked(This,val) ) 

#define ISalamanderGuiCheckBox_put_Checked(This,val)	\
    ( (This)->lpVtbl -> put_Checked(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderGuiCheckBox_INTERFACE_DEFINED__ */


#ifndef __ISalamanderGuiButton_INTERFACE_DEFINED__
#define __ISalamanderGuiButton_INTERFACE_DEFINED__

/* interface ISalamanderGuiButton */
/* [oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderGuiButton;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F30E467C-0FEA-4e67-9F51-C2B1A2A30D4E")
    ISalamanderGuiButton : public ISalamanderGuiComponent
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DialogResult( 
            /* [retval][out] */ int *val) = 0;
        
        virtual /* [propput][id] */ HRESULT STDMETHODCALLTYPE put_DialogResult( 
            /* [in] */ int val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderGuiButtonVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderGuiButton * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderGuiButton * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderGuiButton * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, get_Text)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISalamanderGuiButton * This,
            /* [retval][out] */ BSTR *text);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, put_Text)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            ISalamanderGuiButton * This,
            /* [in] */ BSTR text);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiButton, get_DialogResult)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DialogResult )( 
            ISalamanderGuiButton * This,
            /* [retval][out] */ int *val);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiButton, put_DialogResult)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_DialogResult )( 
            ISalamanderGuiButton * This,
            /* [in] */ int val);
        
        END_INTERFACE
    } ISalamanderGuiButtonVtbl;

    interface ISalamanderGuiButton
    {
        CONST_VTBL struct ISalamanderGuiButtonVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderGuiButton_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderGuiButton_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderGuiButton_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderGuiButton_get_Text(This,text)	\
    ( (This)->lpVtbl -> get_Text(This,text) ) 

#define ISalamanderGuiButton_put_Text(This,text)	\
    ( (This)->lpVtbl -> put_Text(This,text) ) 


#define ISalamanderGuiButton_get_DialogResult(This,val)	\
    ( (This)->lpVtbl -> get_DialogResult(This,val) ) 

#define ISalamanderGuiButton_put_DialogResult(This,val)	\
    ( (This)->lpVtbl -> put_DialogResult(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderGuiButton_INTERFACE_DEFINED__ */


#ifndef __ISalamanderGuiContainer_INTERFACE_DEFINED__
#define __ISalamanderGuiContainer_INTERFACE_DEFINED__

/* interface ISalamanderGuiContainer */
/* [oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderGuiContainer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A31B232-B6AF-467a-B818-212CCC6F4C5D")
    ISalamanderGuiContainer : public ISalamanderGuiComponent
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderGuiContainerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderGuiContainer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderGuiContainer * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderGuiContainer * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, get_Text)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISalamanderGuiContainer * This,
            /* [retval][out] */ BSTR *text);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, put_Text)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            ISalamanderGuiContainer * This,
            /* [in] */ BSTR text);
        
        END_INTERFACE
    } ISalamanderGuiContainerVtbl;

    interface ISalamanderGuiContainer
    {
        CONST_VTBL struct ISalamanderGuiContainerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderGuiContainer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderGuiContainer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderGuiContainer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderGuiContainer_get_Text(This,text)	\
    ( (This)->lpVtbl -> get_Text(This,text) ) 

#define ISalamanderGuiContainer_put_Text(This,text)	\
    ( (This)->lpVtbl -> put_Text(This,text) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderGuiContainer_INTERFACE_DEFINED__ */


#ifndef __ISalamanderGuiForm_INTERFACE_DEFINED__
#define __ISalamanderGuiForm_INTERFACE_DEFINED__

/* interface ISalamanderGuiForm */
/* [oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderGuiForm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7356DD12-A7DA-41EB-8E31-F42C465C87E1")
    ISalamanderGuiForm : public ISalamanderGuiContainer
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Execute( 
            /* [retval][out] */ int *result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderGuiFormVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderGuiForm * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderGuiForm * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderGuiForm * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, get_Text)
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Text )( 
            ISalamanderGuiForm * This,
            /* [retval][out] */ BSTR *text);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiComponent, put_Text)
        /* [propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Text )( 
            ISalamanderGuiForm * This,
            /* [in] */ BSTR text);
        
        DECLSPEC_XFGVIRT(ISalamanderGuiForm, Execute)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Execute )( 
            ISalamanderGuiForm * This,
            /* [retval][out] */ int *result);
        
        END_INTERFACE
    } ISalamanderGuiFormVtbl;

    interface ISalamanderGuiForm
    {
        CONST_VTBL struct ISalamanderGuiFormVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderGuiForm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderGuiForm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderGuiForm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderGuiForm_get_Text(This,text)	\
    ( (This)->lpVtbl -> get_Text(This,text) ) 

#define ISalamanderGuiForm_put_Text(This,text)	\
    ( (This)->lpVtbl -> put_Text(This,text) ) 



#define ISalamanderGuiForm_Execute(This,result)	\
    ( (This)->lpVtbl -> Execute(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderGuiForm_INTERFACE_DEFINED__ */


#ifndef __ISalamanderGui_INTERFACE_DEFINED__
#define __ISalamanderGui_INTERFACE_DEFINED__

/* interface ISalamanderGui */
/* [nonextensible][oleautomation][unique][dual][uuid][object] */ 


EXTERN_C const IID IID_ISalamanderGui;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5DA5C3EE-E167-4E57-A8E9-22EF1C8B45C4")
    ISalamanderGui : public IUnknown
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Form( 
            /* [optional][in] */ VARIANT *title,
            /* [retval][out] */ ISalamanderGuiComponent **component) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Button( 
            /* [optional][in] */ VARIANT *text,
            /* [optional][in] */ VARIANT *result,
            /* [retval][out] */ ISalamanderGuiComponent **component) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE CheckBox( 
            /* [optional][in] */ VARIANT *text,
            /* [retval][out] */ ISalamanderGuiComponent **component) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE TextBox( 
            /* [optional][in] */ VARIANT *text,
            /* [retval][out] */ ISalamanderGuiComponent **component) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Label( 
            /* [optional][in] */ VARIANT *text,
            /* [retval][out] */ ISalamanderGuiComponent **component) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISalamanderGuiVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISalamanderGui * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISalamanderGui * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISalamanderGui * This);
        
        DECLSPEC_XFGVIRT(ISalamanderGui, Form)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Form )( 
            ISalamanderGui * This,
            /* [optional][in] */ VARIANT *title,
            /* [retval][out] */ ISalamanderGuiComponent **component);
        
        DECLSPEC_XFGVIRT(ISalamanderGui, Button)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Button )( 
            ISalamanderGui * This,
            /* [optional][in] */ VARIANT *text,
            /* [optional][in] */ VARIANT *result,
            /* [retval][out] */ ISalamanderGuiComponent **component);
        
        DECLSPEC_XFGVIRT(ISalamanderGui, CheckBox)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *CheckBox )( 
            ISalamanderGui * This,
            /* [optional][in] */ VARIANT *text,
            /* [retval][out] */ ISalamanderGuiComponent **component);
        
        DECLSPEC_XFGVIRT(ISalamanderGui, TextBox)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *TextBox )( 
            ISalamanderGui * This,
            /* [optional][in] */ VARIANT *text,
            /* [retval][out] */ ISalamanderGuiComponent **component);
        
        DECLSPEC_XFGVIRT(ISalamanderGui, Label)
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Label )( 
            ISalamanderGui * This,
            /* [optional][in] */ VARIANT *text,
            /* [retval][out] */ ISalamanderGuiComponent **component);
        
        END_INTERFACE
    } ISalamanderGuiVtbl;

    interface ISalamanderGui
    {
        CONST_VTBL struct ISalamanderGuiVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISalamanderGui_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISalamanderGui_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISalamanderGui_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISalamanderGui_Form(This,title,component)	\
    ( (This)->lpVtbl -> Form(This,title,component) ) 

#define ISalamanderGui_Button(This,text,result,component)	\
    ( (This)->lpVtbl -> Button(This,text,result,component) ) 

#define ISalamanderGui_CheckBox(This,text,component)	\
    ( (This)->lpVtbl -> CheckBox(This,text,component) ) 

#define ISalamanderGui_TextBox(This,text,component)	\
    ( (This)->lpVtbl -> TextBox(This,text,component) ) 

#define ISalamanderGui_Label(This,text,component)	\
    ( (This)->lpVtbl -> Label(This,text,component) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISalamanderGui_INTERFACE_DEFINED__ */



#ifndef __SalamanderLib_LIBRARY_DEFINED__
#define __SalamanderLib_LIBRARY_DEFINED__

/* library SalamanderLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SalamanderLib;

EXTERN_C const CLSID CLSID_Salamander;

#ifdef __cplusplus

class DECLSPEC_UUID("4A871BAC-3572-4737-9110-D208BB58ACAF")
Salamander;
#endif

EXTERN_C const CLSID CLSID_SalamanderPanel;

#ifdef __cplusplus

class DECLSPEC_UUID("76F49900-4C7D-4808-8DD3-7546CF1891DE")
SalamanderPanel;
#endif

EXTERN_C const CLSID CLSID_PanelItem;

#ifdef __cplusplus

class DECLSPEC_UUID("968B2791-83A4-4198-B5A7-581CE0C8B961")
PanelItem;
#endif

EXTERN_C const CLSID CLSID_ItemCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("264D1DCA-E6B9-4a77-970E-D66AE7428E66")
ItemCollection;
#endif

EXTERN_C const CLSID CLSID_ProgressDialog;

#ifdef __cplusplus

class DECLSPEC_UUID("4870003D-1E6D-4c53-B561-7659B9D271C6")
ProgressDialog;
#endif

EXTERN_C const CLSID CLSID_WaitWindow;

#ifdef __cplusplus

class DECLSPEC_UUID("B1CF10AA-00FA-4930-9E38-FEE9BB0D2978")
WaitWindow;
#endif

EXTERN_C const CLSID CLSID_ScriptInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("18395B8C-C099-45f7-A8CD-433ADD8D1339")
ScriptInfo;
#endif

EXTERN_C const CLSID CLSID_Form;

#ifdef __cplusplus

class DECLSPEC_UUID("67A0E6E0-4E9A-4fa1-846F-B58A08BB671F")
Form;
#endif

EXTERN_C const CLSID CLSID_Button;

#ifdef __cplusplus

class DECLSPEC_UUID("578A8B4C-92E1-4581-9A7D-EE476574D856")
Button;
#endif

EXTERN_C const CLSID CLSID_CheckBox;

#ifdef __cplusplus

class DECLSPEC_UUID("8525BEBC-3963-4782-9329-70FED124BC8F")
CheckBox;
#endif

EXTERN_C const CLSID CLSID_TextBox;

#ifdef __cplusplus

class DECLSPEC_UUID("45AA6FB3-7D7C-4e58-920F-1671A7FD1A2B")
TextBox;
#endif

EXTERN_C const CLSID CLSID_Label;

#ifdef __cplusplus

class DECLSPEC_UUID("14E99D22-2526-4fe7-AC7C-AA06D1362AFC")
Label;
#endif
#endif /* __SalamanderLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


