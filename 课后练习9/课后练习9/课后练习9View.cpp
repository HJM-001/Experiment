
// �κ���ϰ9View.cpp : C�κ���ϰ9View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�κ���ϰ9.h"
#endif

#include "�κ���ϰ9Doc.h"
#include "�κ���ϰ9View.h"
#include "log9.h"

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�κ���ϰ9View

IMPLEMENT_DYNCREATE(C�κ���ϰ9View, CView)

BEGIN_MESSAGE_MAP(C�κ���ϰ9View, CView)
	ON_COMMAND(ID_lujing, &C�κ���ϰ9View::Onlujing)
	ON_COMMAND(ID_xianshi, &C�κ���ϰ9View::Onxianshi)

END_MESSAGE_MAP()

// C�κ���ϰ9View ����/����

C�κ���ϰ9View::C�κ���ϰ9View()
{
	// TODO: �ڴ˴���ӹ������

}

C�κ���ϰ9View::~C�κ���ϰ9View()
{
}

BOOL C�κ���ϰ9View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�κ���ϰ9View ����

void C�κ���ϰ9View::OnDraw(CDC* /*pDC*/)
{
	C�κ���ϰ9Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�κ���ϰ9View ���

#ifdef _DEBUG
void C�κ���ϰ9View::AssertValid() const
{
	CView::AssertValid();
}

void C�κ���ϰ9View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�κ���ϰ9Doc* C�κ���ϰ9View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�κ���ϰ9Doc)));
	return (C�κ���ϰ9Doc*)m_pDocument;
}
#endif //_DEBUG


// C�κ���ϰ9View ��Ϣ�������


void C�κ���ϰ9View::Onlujing()
{C�κ���ϰ9Doc* pDoc = GetDocument();
	// TODO: �ڴ���������������
	CFileDialog cf(true);
	int r = cf.DoModal();
	if (r == IDOK)
	{
		CString s;
		s = cf.GetPathName();
		
		ofstream ofs("abc.txt");
		ofs <<CT2A(s.GetString())<< endl;
	}
}


void C�κ���ϰ9View::Onxianshi()
{
	// TODO: �ڴ���������������
	C�κ���ϰ9Doc* pDoc = GetDocument();
	log9 dlg;
	
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
}



