// ResizePartition.cpp : implementation file
//

#include "stdafx.h"
#include "WIIScrubber.h"
#include "ResizePartition.h"
	
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;

#endif	/* 
	
/////////////////////////////////////////////////////////////////////////////
// CResizePartition dialog
	
:CDialog (CResizePartition::IDD, pParent) 
{
	
		//{{AFX_DATA_INIT(CResizePartition)
		m_csCurrentSize = _T ("");
	
	
	
	
	
		//}}AFX_DATA_INIT
		nNewSize = 0;
	
	

{
	
	
		//{{AFX_DATA_MAP(CResizePartition)
		DDX_Text (pDX, IDC_CURRENTSIZE, m_csCurrentSize);
	
	
	
	
	
		//}}AFX_DATA_MAP
} 
	//{{AFX_MSG_MAP(CResizePartition)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP () 
/////////////////////////////////////////////////////////////////////////////
// CResizePartition message handlers
     
{
	
	
	
		// get the value out
		sscanf (m_csCurrentSize, "%I64X", &nTempVal);
	
		// check its >=Min and < max
		if ((nTempVal != 0) && 
		    ((nTempVal >= nMinSize) && 
		
		
			// if so then OK
			// we need to set it to a 32k boundary
			if (0 != (nTempVal % 0x8000))
			
			
				((nTempVal / (u_int64_t) 0x8000) +
				 (u_int64_t) 1) * (u_int64_t) 0x8000;
			
		
		else
			
			
			
		
		
	
		// else error
		else
		
		
		


{
	
		// TODO: Add extra cleanup here
		

				       u_int64_t nMax) 
{
	
	
	
	
	
	
	
	

{
	

