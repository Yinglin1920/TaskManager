// TaskManager.h : main header file for the TASKMANAGER application
//

#if !defined(AFX_TASKMANAGER_H__FDF83970_8A9E_4032_91F7_E00F4C906944__INCLUDED_)
#define AFX_TASKMANAGER_H__FDF83970_8A9E_4032_91F7_E00F4C906944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTaskManagerApp:
// See TaskManager.cpp for the implementation of this class
//

class CTaskManagerApp : public CWinApp
{
public:
	CTaskManagerApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTaskManagerApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTaskManagerApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TASKMANAGER_H__FDF83970_8A9E_4032_91F7_E00F4C906944__INCLUDED_)
