///////////////////////////////////////////////////////////////////////////////
// Unbenannt1Driver.h

#ifndef __UNBENANNT1DRIVER_H__
#define __UNBENANNT1DRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define UNBENANNT1DRV_NAME        "UNBENANNT1"
#define UNBENANNT1DRV_Major       1
#define UNBENANNT1DRV_Minor       0

#define DEVICE_CLASS CUnbenannt1Driver

#include "ObjDriver.h"

class CUnbenannt1Driver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl UNBENANNT1DRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(UNBENANNT1DRV)
	VxD_Service( UNBENANNT1DRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __UNBENANNT1DRIVER_H__