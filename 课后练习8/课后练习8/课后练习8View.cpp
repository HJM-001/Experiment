
// �κ���ϰ8View.cpp : C�κ���ϰ8View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�κ���ϰ8.h"
#endif

#include "�κ���ϰ8Doc.h"
#include "�κ���ϰ8View.h"
#include "log8.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�κ���ϰ8View

IMPLEMENT_DYNCREATE(C�κ���ϰ8View, CView)

BEGIN_MESSAGE_MAP(C�κ���ϰ8View, CView)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_tanchu, &C�κ���ϰ8View::Ontanchu)
END_MESSAGE_MAP()

// C�κ���ϰ8View ����/����

C�κ���ϰ8View::C�κ���ϰ8View()
{
	// TODO: �ڴ˴���ӹ������

}

C�κ���ϰ8View::~C�κ���ϰ8View()
{
}

BOOL C�κ���ϰ8View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�κ���ϰ8View ����

void C�κ���ϰ8View::OnDraw(CDC* /*pDC*/)
{
	C�κ���ϰ8Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�κ���ϰ8View ���

#ifdef _DEBUG
void C�κ���ϰ8View::AssertValid() const
{
	CView::AssertValid();
}

void C�κ���ϰ8View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�κ���ϰ8Doc* C�κ���ϰ8View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�κ���ϰ8Doc)));
	return (C�κ���ϰ8Doc*)m_pDocument;
}
#endif //_DEBUG


// C�κ���ϰ8View ��Ϣ�������


void C�κ���ϰ8View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	C�κ���ϰ8Doc* pDoc = GetDocument();
	CFileDialog cf(true);
	int t = cf.DoModal();
	if (t == IDOK)
	{
		pDoc->s = cf.GetFileName();
		GetDC()->TextOutW(200,200, pDoc->s);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void C�κ���ϰ8View::Ontanchu()
{
	// TODO: �ڴ���������������
	C�κ���ϰ8Doc* pDoc = GetDocument();
	log8 dlg;
	dlg.a = pDoc->s;
	if (dlg.DoModal()== IDOK)
	{

	}
}
