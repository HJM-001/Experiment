
// sy1View.cpp : Csy1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "sy1.h"
#endif

#include "sy1Doc.h"
#include "sy1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Csy1View

IMPLEMENT_DYNCREATE(Csy1View, CView)

BEGIN_MESSAGE_MAP(Csy1View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// Csy1View ����/����

Csy1View::Csy1View()
{
	// TODO: �ڴ˴���ӹ������

}

Csy1View::~Csy1View()
{
}

BOOL Csy1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Csy1View ����

void Csy1View::OnDraw(CDC* pDC)
{
	Csy1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	CString s = _T("����Ѧ����");
	int a = 13;

	CString A;
A.Format(_T("%d"), a);
	pDC->TextOutW(200, 300, s);
	pDC->TextOutW(200,200, A);
	
}


// Csy1View ���

#ifdef _DEBUG
void Csy1View::AssertValid() const
{
	CView::AssertValid();
}

void Csy1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Csy1Doc* Csy1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Csy1Doc)));
	return (Csy1Doc*)m_pDocument;
}
#endif //_DEBUG


// Csy1View ��Ϣ�������


void Csy1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Csy1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDoc->count++;

	CView::OnLButtonDown(nFlags, point);
}


void Csy1View::OnRButtonDown(UINT nFlags, CPoint point)
{
	Csy1Doc* pDoc = GetDocument();
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CClientDC dc(this);
	CString z;
	z.Format(_T("%d"),pDoc->count);
	dc.TextOutW(300, 300, z);

}
