// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "modatum.h"

// Dispatch interfaces referenced by this interface
#include "MoSpheroid.h"


/////////////////////////////////////////////////////////////////////////////
// CMoDatum properties

long CMoDatum::GetType()
{
	long result;
	GetProperty(0x1, VT_I4, (void*)&result);
	return result;
}

void CMoDatum::SetType(long propVal)
{
	SetProperty(0x1, VT_I4, propVal);
}

CString CMoDatum::GetName()
{
	CString result;
	GetProperty(0x2, VT_BSTR, (void*)&result);
	return result;
}

void CMoDatum::SetName(LPCTSTR propVal)
{
	SetProperty(0x2, VT_BSTR, propVal);
}

CMoSpheroid CMoDatum::GetSpheroid()
{
	LPDISPATCH pDispatch;
	GetProperty(0x3, VT_DISPATCH, (void*)&pDispatch);
	return CMoSpheroid(pDispatch);
}

void CMoDatum::SetSpheroid(LPDISPATCH propVal)
{
	SetProperty(0x3, VT_DISPATCH, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMoDatum operations
