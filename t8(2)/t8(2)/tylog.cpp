// tylog.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "t8(2).h"
#include "tylog.h"
#include "afxdialogex.h"


// tylog �Ի���

IMPLEMENT_DYNAMIC(tylog, CDialogEx)

tylog::tylog(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, zx(0)
	, zy(0)
	, yx(0)
	, yy(0)
{

}

tylog::~tylog()
{
}

void tylog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, zx);
	DDX_Text(pDX, IDC_EDIT2, zy);
	DDX_Text(pDX, IDC_EDIT3, yx);
	DDX_Text(pDX, IDC_EDIT4, yy);
}


BEGIN_MESSAGE_MAP(tylog, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT4, &tylog::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT3, &tylog::OnEnChangeEdit3)
END_MESSAGE_MAP()


// tylog ��Ϣ�������


void tylog::OnEnChangeEdit4()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void tylog::OnEnChangeEdit3()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
