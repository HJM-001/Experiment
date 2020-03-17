
// t3View.cpp : Ct3View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "t3.h"
#endif

#include "t3Doc.h"
#include "t3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ct3View

IMPLEMENT_DYNCREATE(Ct3View, CView)

BEGIN_MESSAGE_MAP(Ct3View, CView)
	ON_WM_KEYDOWN()
	ON_WM_LBUTTONDOWN()
//	ON_WM_CHAR()
//ON_WM_MOUSEMOVE()
ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// Ct3View ����/����

Ct3View::Ct3View()
{
	// TODO: �ڴ˴���ӹ������

}

Ct3View::~Ct3View()
{
}

BOOL Ct3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ct3View ����

void Ct3View::OnDraw(CDC* pDC)
{
	Ct3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->Rectangle(&pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ct3View ���

#ifdef _DEBUG
void Ct3View::AssertValid() const
{
	CView::AssertValid();
}

void Ct3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ct3Doc* Ct3View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ct3Doc)));
	return (Ct3Doc*)m_pDocument;
}
#endif //_DEBUG


// Ct3View ��Ϣ�������


void Ct3View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ct3Doc* pDoc = GetDocument();

	CRect clientcr;
	GetClientRect(&clientcr);
	switch (nChar)
	{case VK_LEFT:
		if(pDoc->cr.left>0)
		{
			pDoc->cr.left -= 5;
			pDoc->cr.right -= 5;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right<(clientcr.right- clientcr.left))
		{
			pDoc->cr.left += 5;
			pDoc->cr.right += 5;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top>0)
		{
			pDoc->cr.top -= 5;
			pDoc->cr.bottom -= 5;

		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom<(clientcr.bottom - clientcr.top))
		{
			pDoc->cr.top += 5;
			pDoc->cr.bottom += 5;

		}
		break;
	case VK_HOME:
		if (pDoc->cr.left>0&& pDoc->cr.top>0)
		{
			pDoc->cr.top -= 5;
			pDoc->cr.left -= 5;

		}
		break;
	case VK_END:
		if (pDoc->cr.left<(pDoc->cr.right-5)&& pDoc->cr.top<(pDoc->cr.bottom-5))
		{
			pDoc->cr.top += 5;
			pDoc->cr.left += 5;

		}
		break;
	}
	InvalidateRect(NULL,TRUE);
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}


void Ct3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	Ct3Doc* pDoc = GetDocument();
	pDoc->cp = point;
	

	pDoc->cr.left = pDoc->cr.right - pDoc->x;
	pDoc->cr.top = pDoc->cr.bottom - pDoc->y;
	InvalidateRect(NULL, TRUE);
	CView::OnLButtonDown(nFlags, point);
}








void Ct3View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	Ct3Doc* pDoc = GetDocument();

	pDoc->count=(point.x- pDoc->cp.x)/10;
	CClientDC dc(this);
	TCHAR s[40];
	wsprintf(s,TEXT("x=%d�������ƶ�10���ط���һ�Σ�"), pDoc->count);
dc.TextOutW(500,100,s);
	
	CView::OnLButtonUp(nFlags, point);
}
