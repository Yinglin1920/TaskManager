// Taskmanager.h : main header file for the TASKMANAGER application
//

#if !defined(AFX_TASKMANAGER_H__EC90AC39_75B1_48F8_A46C_38787E792824__INCLUDED_)
#define AFX_TASKMANAGER_H__EC90AC39_75B1_48F8_A46C_38787E792824__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTaskmanagerApp:
// See Taskmanager.cpp for the implementation of this class
//

class CTaskmanagerApp : public CWinApp
{
public:
	CTaskmanagerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTaskmanagerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTaskmanagerApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TASKMANAGER_H__EC90AC39_75B1_48F8_A46C_38787E792824__INCLUDED_)
