///////////////////////////////////////////////////////////////////////////////
// Unbenannt1Ctrl.h

#ifndef __UNBENANNT1CTRL_H__
#define __UNBENANNT1CTRL_H__

#include <atlbase.h>
#include <atlcom.h>

#define UNBENANNT1DRV_NAME "UNBENANNT1"

#include "resource.h"       // main symbols
#include "Unbenannt1W32.h"
#include "TcBase.h"
#include "Unbenannt1ClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CUnbenannt1Ctrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CUnbenannt1Ctrl, &CLSID_Unbenannt1Ctrl>
	, public IUnbenannt1Ctrl
	, public ITcOCFCtrlImpl<CUnbenannt1Ctrl, CUnbenannt1ClassFactory>
{
public:
	CUnbenannt1Ctrl();
	virtual ~CUnbenannt1Ctrl();

DECLARE_REGISTRY_RESOURCEID(IDR_UNBENANNT1CTRL)
DECLARE_NOT_AGGREGATABLE(CUnbenannt1Ctrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CUnbenannt1Ctrl)
	COM_INTERFACE_ENTRY(IUnbenannt1Ctrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __UNBENANNT1CTRL_H__
