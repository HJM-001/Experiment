
// MFCCView.h : CMFCCView ��Ľӿ�
//

#pragma once


class CMFCCView : public CView
{
protected: // �������л�����
	CMFCCView();
	DECLARE_DYNCREATE(CMFCCView)

// ����
public:
	CMFCCDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFCCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFCCView.cpp �еĵ��԰汾
inline CMFCCDoc* CMFCCView::GetDocument() const
   { return reinterpret_cast<CMFCCDoc*>(m_pDocument); }
#endif

