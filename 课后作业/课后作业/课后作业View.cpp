
// �κ���ҵView.cpp : C�κ���ҵView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�κ���ҵ.h"
#endif

#include "�κ���ҵDoc.h"
#include "�κ���ҵView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�κ���ҵView

IMPLEMENT_DYNCREATE(C�κ���ҵView, CView)

BEGIN_MESSAGE_MAP(C�κ���ҵView, CView)
	ON_COMMAND(ID_yuan, &C�κ���ҵView::Onyuan)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C�κ���ҵView ����/����

C�κ���ҵView::C�κ���ҵView()
{
	// TODO: �ڴ˴���ӹ������

}

C�κ���ҵView::~C�κ���ҵView()
{
}

BOOL C�κ���ҵView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�κ���ҵView ����

void C�κ���ҵView::OnDraw(CDC* pDC)
{
	C�κ���ҵDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	CRect c;
	GetClientRect(&c);
	int x = (c.right - c.left) / 2, y = (c.bottom - c.top) / 2;
	if (!pDoc->set)
	{
		if (x > y)
		{
			if (pDoc->cr.top <= 5)
			{
				KillTimer(1);
				pDoc->set = true;
			}
			else
			{
				CPen newcp(PS_SOLID, 2, pDoc->color);
				CPen *oldcp = pDC->SelectObject(&newcp);


				pDC->Ellipse(pDoc->cr);
				pDC->SelectObject(oldcp);
			}
		}
		else
		{
			if (pDoc->cr.left <= 5)
			{
				KillTimer(1);
				pDoc->set = true;
			}
			else
			{
				CPen newcp(PS_SOLID, 2, pDoc->color);
				CPen *oldcp = pDC->SelectObject(&newcp);


				pDC->Ellipse(pDoc->cr);
				pDC->SelectObject(oldcp);
			}


		}
	}
	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�κ���ҵView ���

#ifdef _DEBUG
void C�κ���ҵView::AssertValid() const
{
	CView::AssertValid();
}

void C�κ���ҵView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�κ���ҵDoc* C�κ���ҵView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�κ���ҵDoc)));
	return (C�κ���ҵDoc*)m_pDocument;
}
#endif //_DEBUG


// C�κ���ҵView ��Ϣ�������


void C�κ���ҵView::Onyuan()
{
	C�κ���ҵDoc* pDoc = GetDocument();
	
	if (pDoc->set) {
		SetTimer(1, 500, NULL);
		pDoc->set = false;
	}
	CRect c;
	GetClientRect(&c);
	int x = (c.right - c.left) / 2, y = (c.bottom - c.top) / 2;

	 pDoc->cr.left = x-10;
	pDoc->cr.right = x +10;
	pDoc->cr.top =y-10;
	pDoc->cr.bottom = y+10;
	
	// TODO: �ڴ���������������
}


void C�κ���ҵView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
	C�κ���ҵDoc* pDoc = GetDocument();
	
	pDoc->r += 32;
	pDoc->g += 16;
	pDoc->b += 8;
	pDoc->color = RGB(pDoc->r, pDoc->g, pDoc->b);
	pDoc->cr.left -= 10;
	pDoc->cr.right += 10;
	pDoc->cr.top -= 10;
	pDoc->cr.bottom += 10;
	Invalidate();
	CView::OnTimer(nIDEvent);
}
