// log3.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "t7(2)(3).h"
#include "log3.h"
#include "afxdialogex.h"


// log3 �Ի���

IMPLEMENT_DYNAMIC(log3, CDialogEx)

log3::log3(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, x(0)
	, y(0)
	, z(0)
{

}

log3::~log3()
{
}

void log3::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, x);
	DDX_Text(pDX, IDC_EDIT2, y);
	DDX_Text(pDX, IDC_EDIT3, z);
}


BEGIN_MESSAGE_MAP(log3, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &log3::OnBnClickedButton1)
END_MESSAGE_MAP()


// log3 ��Ϣ�������


void log3::OnBnClickedButton1()
{
	this->UpdateData(true);
	z = x + y;
	UpdateData(false);
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}
