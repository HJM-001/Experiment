
// �κ���ϰ1View.cpp : C�κ���ϰ1View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "�κ���ϰ1.h"
#endif

#include "�κ���ϰ1Doc.h"
#include "�κ���ϰ1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C�κ���ϰ1View

IMPLEMENT_DYNCREATE(C�κ���ϰ1View, CView)

BEGIN_MESSAGE_MAP(C�κ���ϰ1View, CView)
	ON_COMMAND(ID_FILE_OPEN, &C�κ���ϰ1View::OnFileOpen)
END_MESSAGE_MAP()

// C�κ���ϰ1View ����/����

C�κ���ϰ1View::C�κ���ϰ1View()
{
	// TODO: �ڴ˴���ӹ������

}

C�κ���ϰ1View::~C�κ���ϰ1View()
{
}

BOOL C�κ���ϰ1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// C�κ���ϰ1View ����

void C�κ���ϰ1View::OnDraw(CDC* pDC)
{
	C�κ���ϰ1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	if (pDoc->t)
	{
		CRect cr;
		GetClientRect(&cr);
		float cr_ra = 1.0*cr.Width() / cr.Height();
		float img_ra = 1.0*pDoc->img.GetWidth() / pDoc->img.GetHeight();
		if (cr_ra > img_ra)
		{
			pDoc->h = cr.Height();
			pDoc->w = img_ra*pDoc->h;
			pDoc->sx = (cr.Width() - pDoc->w) / 2;
			pDoc->sy = 0;
		}
		else
		{
			pDoc->w = cr.Width();
			pDoc->h = img_ra*pDoc->w;
			pDoc->sx = 0;
			pDoc->sy = (cr.Height() - pDoc->h) / 2;

		}
		pDoc->img.Draw(pDC->m_hDC, pDoc->sx, pDoc->sy, pDoc->w, pDoc->h);
		

	}

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// C�κ���ϰ1View ���

#ifdef _DEBUG
void C�κ���ϰ1View::AssertValid() const
{
	CView::AssertValid();
}

void C�κ���ϰ1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C�κ���ϰ1Doc* C�κ���ϰ1View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C�κ���ϰ1Doc)));
	return (C�κ���ϰ1Doc*)m_pDocument;
}
#endif //_DEBUG


// C�κ���ϰ1View ��Ϣ�������


void C�κ���ϰ1View::OnFileOpen()
{
	// TODO: �ڴ���������������
	C�κ���ϰ1Doc* pDoc = GetDocument();
	CString finame;
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CImage img;
	CClientDC dc(this);
	pDoc->t = true;
	
	if (r == IDOK)
	{	 finame = cfd.GetPathName();
		 pDoc->img.Load(finame);
	
		 CRect cr;
		 GetClientRect(&cr);
		 float cr_ra = 1.0*cr.Width() / cr.Height();
		 float img_ra = 1.0*pDoc->img.GetWidth() / pDoc->img.GetHeight();
		 if (cr_ra > img_ra)
		 {
			 pDoc->h = cr.Height();
			 pDoc->w = img_ra*pDoc->h;
			 pDoc->sx = (cr.Width() - pDoc->w) / 2;
			 pDoc->sy = 0;
		 }
		 else
		 {
			 pDoc->w = cr.Width();
			 pDoc->h = img_ra*pDoc->w;
			 pDoc->sx = 0;
			 pDoc->sy = (cr.Height() - pDoc->h) / 2;

		 }
		
	}

	


	pDoc->img.Draw(dc.m_hDC, pDoc->sx, pDoc->sy, pDoc->w, pDoc->h);






}
