///////////////////////////////////////////////////////////////////////////////
// Unbenannt1Driver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "Unbenannt1Driver.h"
#include "Unbenannt1ClassFactory.h"

DECLARE_GENERIC_DEVICE(UNBENANNT1DRV)

IOSTATUS CUnbenannt1Driver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CUnbenannt1ClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CUnbenannt1Driver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CUnbenannt1Driver::UNBENANNT1DRV_GetVersion( )
{
	return( (UNBENANNT1DRV_Major << 8) | UNBENANNT1DRV_Minor );
}

