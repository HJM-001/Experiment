
// �κ���ϰView.h : C�κ���ϰView ��Ľӿ�
//

#pragma once


class C�κ���ϰView : public CView
{
protected: // �������л�����
	C�κ���ϰView();
	DECLARE_DYNCREATE(C�κ���ϰView)

// ����
public:
	C�κ���ϰDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�κ���ϰView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onck();
};

#ifndef _DEBUG  // �κ���ϰView.cpp �еĵ��԰汾
inline C�κ���ϰDoc* C�κ���ϰView::GetDocument() const
   { return reinterpret_cast<C�κ���ϰDoc*>(m_pDocument); }
#endif

