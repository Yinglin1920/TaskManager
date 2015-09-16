// AppException.h: interface for the CAppException class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_APPEXCEPTION_H__87A984E2_5608_4BFD_BDFF_279A8BF69CA2__INCLUDED_)
#define AFX_APPEXCEPTION_H__87A984E2_5608_4BFD_BDFF_279A8BF69CA2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CAppException : public CException  
{
	DECLARE_DYNAMIC(CAppException);


public:
	CAppException();
	CAppException(CString szError);
	virtual ~CAppException();

public:
	virtual BOOL GetErrorMessage(LPTSTR lpszError, UINT nMaxError, PUINT pnHelpContext = NULL);
    CString GetErrorMessage();
    
private:
	CString m_szError;
	int m_nCode;

};

#endif // !defined(AFX_APPEXCEPTION_H__87A984E2_5608_4BFD_BDFF_279A8BF69CA2__INCLUDED_)
