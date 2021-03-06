// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "motrackinglayer.h"

// Dispatch interfaces referenced by this interface
#include "MoSymbol.h"
#include "MoGeoEvent.h"


/////////////////////////////////////////////////////////////////////////////
// CMoTrackingLayer properties

long CMoTrackingLayer::GetEventCount()
{
	long result;
	GetProperty(0x2, VT_I4, (void*)&result);
	return result;
}

void CMoTrackingLayer::SetEventCount(long propVal)
{
	SetProperty(0x2, VT_I4, propVal);
}

long CMoTrackingLayer::GetSymbolCount()
{
	long result;
	GetProperty(0x3, VT_I4, (void*)&result);
	return result;
}

void CMoTrackingLayer::SetSymbolCount(long propVal)
{
	SetProperty(0x3, VT_I4, propVal);
}

BOOL CMoTrackingLayer::GetVisible()
{
	BOOL result;
	GetProperty(0x1, VT_BOOL, (void*)&result);
	return result;
}

void CMoTrackingLayer::SetVisible(BOOL propVal)
{
	SetProperty(0x1, VT_BOOL, propVal);
}

/////////////////////////////////////////////////////////////////////////////
// CMoTrackingLayer operations

CMoSymbol CMoTrackingLayer::GetSymbol(long index)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		index);
	return CMoSymbol(pDispatch);
}

CMoGeoEvent CMoTrackingLayer::GetEvent(long index)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, parms,
		index);
	return CMoGeoEvent(pDispatch);
}

void CMoTrackingLayer::RemoveEvent(long index)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 index);
}

CMoGeoEvent CMoTrackingLayer::AddEvent(LPDISPATCH shape, long SymbolIndex)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_DISPATCH VTS_I4;
	InvokeHelper(0x5, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		shape, SymbolIndex);
	return CMoGeoEvent(pDispatch);
}

void CMoTrackingLayer::ClearEvents()
{
	InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CMoTrackingLayer::Refresh(BOOL erase, const VARIANT& rect)
{
	static BYTE parms[] =
		VTS_BOOL VTS_VARIANT;
	InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms,
		 erase, &rect);
}

CMoGeoEvent CMoTrackingLayer::FindEvent(LPCTSTR Tag)
{
	LPDISPATCH pDispatch;
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x8, DISPATCH_METHOD, VT_DISPATCH, (void*)&pDispatch, parms,
		Tag);
	return CMoGeoEvent(pDispatch);
}
