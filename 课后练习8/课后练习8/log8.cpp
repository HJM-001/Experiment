// log8.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�κ���ϰ8.h"
#include "log8.h"
#include "afxdialogex.h"


// log8 �Ի���

IMPLEMENT_DYNAMIC(log8, CDialogEx)

log8::log8(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(_T(""))
{

}

log8::~log8()
{
}

void log8::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Control(pDX, IDC_LIST1, b);
}


BEGIN_MESSAGE_MAP(log8, CDialogEx)
END_MESSAGE_MAP()


// log8 ��Ϣ�������


BOOL log8::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	b.AddString(a);
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}
