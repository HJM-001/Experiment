
// MFCCView.cpp : CMFCCView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "MFCC.h"
#endif

#include "MFCCDoc.h"
#include "MFCCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCCView

IMPLEMENT_DYNCREATE(CMFCCView, CView)

BEGIN_MESSAGE_MAP(CMFCCView, CView)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMFCCView ����/����

CMFCCView::CMFCCView()
{
	// TODO: �ڴ˴���ӹ������

}

CMFCCView::~CMFCCView()
{
}

BOOL CMFCCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CMFCCView ����

void CMFCCView::OnDraw(CDC* pDC)
{
	CMFCCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (pDoc->b)
	{
		SetTimer(1,100,NULL);
		pDoc->b = false;
	}
	pDC->Ellipse(pDoc->cr);
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CMFCCView ���

#ifdef _DEBUG
void CMFCCView::AssertValid() const
{
	CView::AssertValid();
}

void CMFCCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCCDoc* CMFCCView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCCDoc)));
	return (CMFCCDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFCCView ��Ϣ�������


void CMFCCView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	CMFCCDoc* pDoc = GetDocument();
	CRect c;
	GetClientRect(&c);
	if(pDoc->cr.bottom<(c.bottom-c.top)&&pDoc->t)
	{ 
	pDoc->cr.top += 5;
	pDoc->cr.bottom += 5;}
	else pDoc->t = false;
		if (pDoc->cr.top>0&& !pDoc->t) {
		pDoc->cr.top -= 5;
		pDoc->cr.bottom -= 5;
	}
		else pDoc->t = true;

	Invalidate();
	CView::OnTimer(nIDEvent);
}
