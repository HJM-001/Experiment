// diolog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�κ���ϰ.h"
#include "diolog.h"
#include "afxdialogex.h"


// diolog �Ի���

IMPLEMENT_DYNAMIC(diolog, CDialogEx)

diolog::diolog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s1(_T(""))
	, s2(_T(""))
{

}

diolog::~diolog()
{
}

void diolog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT3, s1);
	DDX_Text(pDX, IDC_EDIT4, s2);
}


BEGIN_MESSAGE_MAP(diolog, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON2, &diolog::OnBnClickedButton2)
END_MESSAGE_MAP()


// diolog ��Ϣ�������


void diolog::OnBnClickedButton2()
{



	CString s;
	this->UpdateData(true);
	s = s1;
	s1 = s2;
	s2 = s;
	this->UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
