// AppException.cpp: implementation of the CAppException class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "TaskManager.h"
#include "AppException.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

IMPLEMENT_DYNAMIC(CAppException,CException);

CAppException::CAppException()
{
	m_szError="";
	m_nCode=0;
}

CAppException::CAppException(CString szError)
{
	m_szError=szError;
	m_nCode=0;
}

CAppException::~CAppException()
{

}

BOOL CAppException::GetErrorMessage(LPTSTR lpszError, UINT nMaxError, PUINT pnHelpContext)
{
		//假定添加为真
	ASSERT(nMaxError > 0 && AfxIsValidString(lpszError,nMaxError));
	//如果错误字符数组指针无效，返回false
	if(!AfxIsValidString(lpszError,nMaxError))
		return false;
	//将异常字符串拷贝给接收错误信息字符信息
	strcpy(lpszError,m_szError - 1);
	//将帮助信息置0
	if(pnHelpContext!=NULL)
	{
		*pnHelpContext = 0;
	}
  return true;
	return TRUE;
}

CString CAppException::GetErrorMessage()
{
	return m_szError;
}
