// TaskManagerDlg.h : header file
//

#if !defined(AFX_TASKMANAGERDLG_H__F5B09D73_6D3D_4811_AA4B_28471BA83DE0__INCLUDED_)
#define AFX_TASKMANAGERDLG_H__F5B09D73_6D3D_4811_AA4B_28471BA83DE0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTaskManagerDlg dialog

class CTaskManagerDlg : public CDialog
{
// Construction
public:
	CTaskManagerDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTaskManagerDlg)
	enum { IDD = IDD_TASKMANAGER_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTaskManagerDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;



	// Generated message map functions
	//{{AFX_MSG(CTaskManagerDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnMenuExit();
	afx_msg void OnMenuAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

private:
	CMenu m_menu;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TASKMANAGERDLG_H__F5B09D73_6D3D_4811_AA4B_28471BA83DE0__INCLUDED_)
