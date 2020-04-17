
// t7View.cpp : Ct7View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "t7.h"
#endif

#include "t7Doc.h"
#include "t7View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ct7View

IMPLEMENT_DYNCREATE(Ct7View, CView)

BEGIN_MESSAGE_MAP(Ct7View, CView)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ct7View ����/����

Ct7View::Ct7View()
{
	// TODO: �ڴ˴���ӹ������

}

Ct7View::~Ct7View()
{
}

BOOL Ct7View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ct7View ����

void Ct7View::OnDraw(CDC* pDC)
{
	Ct7Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ct7View ���

#ifdef _DEBUG
void Ct7View::AssertValid() const
{
	CView::AssertValid();
}

void Ct7View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ct7Doc* Ct7View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ct7Doc)));
	return (Ct7Doc*)m_pDocument;
}
#endif //_DEBUG


// Ct7View ��Ϣ�������


void Ct7View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ct7Doc* pDoc = GetDocument();
	if (pDoc->t)
	{
		pDoc->cr.left = point.x - 40;
		pDoc->cr.top = point.y - 20;
		pDoc->cr.bottom = point.y + 20;
		pDoc->cr.right = point.x + 40;
		Invalidate();
	}
	CView::OnMouseMove(nFlags, point);
}


void Ct7View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ct7Doc* pDoc = GetDocument();
	if (((pDoc->cr.left)<point.x) && (point.x< (pDoc->cr.right)) && ((pDoc->cr.top)<point.y) && (point.y< (pDoc->cr.bottom)))
	{

		pDoc->t = true;
	}
	CView::OnLButtonDown(nFlags, point);
}


void Ct7View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ct7Doc* pDoc = GetDocument();
	pDoc->t = false;
	CView::OnLButtonUp(nFlags, point);
}
