
// t7View.h : Ct7View ��Ľӿ�
//

#pragma once


class Ct7View : public CView
{
protected: // �������л�����
	Ct7View();
	DECLARE_DYNCREATE(Ct7View)

// ����
public:
	Ct7Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ct7View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // t7View.cpp �еĵ��԰汾
inline Ct7Doc* Ct7View::GetDocument() const
   { return reinterpret_cast<Ct7Doc*>(m_pDocument); }
#endif

