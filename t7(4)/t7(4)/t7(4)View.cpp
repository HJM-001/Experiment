
// t7(4)View.cpp : Ct74View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "t7(4).h"
#endif

#include "t7(4)Doc.h"
#include "t7(4)View.h"
#include "log4.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Ct74View

IMPLEMENT_DYNCREATE(Ct74View, CView)

BEGIN_MESSAGE_MAP(Ct74View, CView)
	ON_COMMAND(ID_ljie, &Ct74View::Onljie)
END_MESSAGE_MAP()

// Ct74View ����/����

Ct74View::Ct74View()
{
	// TODO: �ڴ˴���ӹ������

}

Ct74View::~Ct74View()
{
}

BOOL Ct74View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// Ct74View ����

void Ct74View::OnDraw(CDC* /*pDC*/)
{
	Ct74Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// Ct74View ���

#ifdef _DEBUG
void Ct74View::AssertValid() const
{
	CView::AssertValid();
}

void Ct74View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Ct74Doc* Ct74View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Ct74Doc)));
	return (Ct74Doc*)m_pDocument;
}
#endif //_DEBUG


// Ct74View ��Ϣ�������


void Ct74View::Onljie()
{
	log4 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{

	}
	// TODO: �ڴ���������������
}
