
// t7(2)(3)View.h : Ct723View ��Ľӿ�
//

#pragma once


class Ct723View : public CView
{
protected: // �������л�����
	Ct723View();
	DECLARE_DYNCREATE(Ct723View)

// ����
public:
	Ct723Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ct723View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnOpend();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // t7(2)(3)View.cpp �еĵ��԰汾
inline Ct723Doc* Ct723View::GetDocument() const
   { return reinterpret_cast<Ct723Doc*>(m_pDocument); }
#endif

