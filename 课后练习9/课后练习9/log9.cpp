// log9.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "�κ���ϰ9.h"
#include "log9.h"
#include "afxdialogex.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

// log9 �Ի���

IMPLEMENT_DYNAMIC(log9, CDialogEx)

log9::log9(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(0)
	, a(_T(""))
{

}

log9::~log9()
{
}

void log9::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
}


BEGIN_MESSAGE_MAP(log9, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &log9::OnBnClickedButton1)
END_MESSAGE_MAP()


// log9 ��Ϣ�������


BOOL log9::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	/*int x, y, w, h;
	CImage img;
	img.Load(a);
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	float c = cr.Width()*1.0 / cr.Height();
	float i = img.GetWidth()*1.0 / img.GetHeight();
	if (c > i)
	{
	h = cr.Height();
	w = i*h;
	x = (cr.Width() - w) / 2;
	y = 0;

	}
	else
	{
	w = cr.Width();
	h = w / i;

	y = (cr.Height() - h) / 2;
	x = 0;

	}
	
	CDC *pDC = GetDlgItem(IDC_STATIC)->GetDC();
	
	

	img.Draw(pDC->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());*/
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��

	return TRUE;  // return TRUE unless you set the focus to a control
				  // �쳣: OCX ����ҳӦ���� FALSE
}


void log9::OnBnClickedButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	ifstream ifs("abc.txt");
	CString ss;
	string s;
	while (ifs >> s)
	{
		ss += CString(s.c_str());
	}
	a = ss;
	UpdateData(false);
	CImage img;
	img.Load(ss);
	int x, y, w, h;
	CRect cr;
	GetDlgItem(IDC_STATIC)->GetClientRect(&cr);
	float c = cr.Width()*1.0 / cr.Height();
	float i = img.GetWidth()*1.0 / img.GetHeight();
	if (c > i)
	{
	h = cr.Height();
	w = i*h;
	x = (cr.Width() - w) / 2;
	y = 0;

	}
	else
	{
	w = cr.Width();
	h = w / i;

	y = (cr.Height() - h) / 2;
	x = 0;

	}
	CDC *pDC =GetDlgItem(IDC_STATIC)->GetDC();
	img.Draw(pDC->m_hDC, 0, 0, img.GetWidth(), img.GetHeight());

}
