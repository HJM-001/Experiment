
// t4View.h : Ct4View ��Ľӿ�
//

#pragma once


class Ct4View : public CView
{
protected: // �������л�����
	Ct4View();
	DECLARE_DYNCREATE(Ct4View)

// ����
public:
	Ct4Doc* GetDocument() const;

// ����
public:
	CBitmap m_Bitmap;
	int W, H;
// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ct4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onxuehao();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void Onxian();
	afx_msg void Onjvxing();
	afx_msg void Ontuoyuan();
};

#ifndef _DEBUG  // t4View.cpp �еĵ��԰汾
inline Ct4Doc* Ct4View::GetDocument() const
   { return reinterpret_cast<Ct4Doc*>(m_pDocument); }
#endif

