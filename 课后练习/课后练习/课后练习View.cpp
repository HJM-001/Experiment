
// �κ���ϰView.cpp : C�κ���ϰView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�κ���ϰ.h"
#endif

#include "�κ���ϰDoc.h"
#include "�κ���ϰView.h"
#include  "diolog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�κ���ϰView

IMPLEMENT_DYNCREATE(C�κ���ϰView, CView)

BEGIN_MESSAGE_MAP(C�κ���ϰView, CView)
	ON_COMMAND(ID_ck, &C�κ���ϰView::Onck)
END_MESSAGE_MAP()

// C�κ���ϰView ����/����

C�κ���ϰView::C�κ���ϰView()
{
	// TODO: �ڴ˴���ӹ������

}

C�κ���ϰView::~C�κ���ϰView()
{
}

BOOL C�κ���ϰView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�κ���ϰView ����

void C�κ���ϰView::OnDraw(CDC* /*pDC*/)
{
	C�κ���ϰDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�κ���ϰView ���

#ifdef _DEBUG
void C�κ���ϰView::AssertValid() const
{
	CView::AssertValid();
}

void C�κ���ϰView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�κ���ϰDoc* C�κ���ϰView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�κ���ϰDoc)));
	return (C�κ���ϰDoc*)m_pDocument;
}
#endif //_DEBUG


// C�κ���ϰView ��Ϣ�������


void C�κ���ϰView::Onck()
{
	// TODO: �ڴ���������������

	diolog di;
	int r = di.DoModal();

	if (r == IDOK)
	{
		GetDC()->TextOutW(200,200,_T("�����˳��Ի���"));
	}

}
