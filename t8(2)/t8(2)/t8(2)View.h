
// t8(2)View.h : Ct82View ��Ľӿ�
//

#pragma once


class Ct82View : public CView
{
protected: // �������л�����
	Ct82View();
	DECLARE_DYNCREATE(Ct82View)

// ����
public:
	Ct82Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ct82View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void Onty();
	afx_msg void Onys();
};

#ifndef _DEBUG  // t8(2)View.cpp �еĵ��԰汾
inline Ct82Doc* Ct82View::GetDocument() const
   { return reinterpret_cast<Ct82Doc*>(m_pDocument); }
#endif

