
// sy1View.h : Csy1View ��Ľӿ�
//

#pragma once


class Csy1View : public CView
{
protected: // �������л�����
	Csy1View();
	DECLARE_DYNCREATE(Csy1View)

// ����
public:
	Csy1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Csy1View();
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
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // sy1View.cpp �еĵ��԰汾
inline Csy1Doc* Csy1View::GetDocument() const
   { return reinterpret_cast<Csy1Doc*>(m_pDocument); }
#endif

