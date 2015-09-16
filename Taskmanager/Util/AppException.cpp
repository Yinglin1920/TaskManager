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
		//�ٶ����Ϊ��
	ASSERT(nMaxError > 0 && AfxIsValidString(lpszError,nMaxError));
	//��������ַ�����ָ����Ч������false
	if(!AfxIsValidString(lpszError,nMaxError))
		return false;
	//���쳣�ַ������������մ�����Ϣ�ַ���Ϣ
	strcpy(lpszError,m_szError - 1);
	//��������Ϣ��0
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
