
// �κ���ҵView.h : C�κ���ҵView ��Ľӿ�
//

#pragma once


class C�κ���ҵView : public CView
{
protected: // �������л�����
	C�κ���ҵView();
	DECLARE_DYNCREATE(C�κ���ҵView)

// ����
public:
	C�κ���ҵDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�κ���ҵView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onyuan();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // �κ���ҵView.cpp �еĵ��԰汾
inline C�κ���ҵDoc* C�κ���ҵView::GetDocument() const
   { return reinterpret_cast<C�κ���ҵDoc*>(m_pDocument); }
#endif

