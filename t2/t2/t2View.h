
// t2View.h : Ct2View ��Ľӿ�
//

#pragma once


class Ct2View : public CView
{
protected: // �������л�����
	Ct2View();
	DECLARE_DYNCREATE(Ct2View)

// ����
public:
	Ct2Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ct2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // t2View.cpp �еĵ��԰汾
inline Ct2Doc* Ct2View::GetDocument() const
   { return reinterpret_cast<Ct2Doc*>(m_pDocument); }
#endif

