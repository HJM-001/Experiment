
// �κ���ϰ8View.h : C�κ���ϰ8View ��Ľӿ�
//

#pragma once


class C�κ���ϰ8View : public CView
{
protected: // �������л�����
	C�κ���ϰ8View();
	DECLARE_DYNCREATE(C�κ���ϰ8View)

// ����
public:
	C�κ���ϰ8Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�κ���ϰ8View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void Ontanchu();
};

#ifndef _DEBUG  // �κ���ϰ8View.cpp �еĵ��԰汾
inline C�κ���ϰ8Doc* C�κ���ϰ8View::GetDocument() const
   { return reinterpret_cast<C�κ���ϰ8Doc*>(m_pDocument); }
#endif

