// TaskmanagerDlg.h : header file
//

#if !defined(AFX_TASKMANAGERDLG_H__C8C5520E_5C65_42A9_9B9D_CE405ACF27BE__INCLUDED_)
#define AFX_TASKMANAGERDLG_H__C8C5520E_5C65_42A9_9B9D_CE405ACF27BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTaskmanagerDlg dialog

class CTaskmanagerDlg : public CDialog
{
// Construction
public:
	CTaskmanagerDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTaskmanagerDlg)
	enum { IDD = IDD_TASKMANAGER_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTaskmanagerDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTaskmanagerDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TASKMANAGERDLG_H__C8C5520E_5C65_42A9_9B9D_CE405ACF27BE__INCLUDED_)
