
// �κ���ϰ1View.h : C�κ���ϰ1View ��Ľӿ�
//

#pragma once


class C�κ���ϰ1View : public CView
{
protected: // �������л�����
	C�κ���ϰ1View();
	DECLARE_DYNCREATE(C�κ���ϰ1View)

// ����
public:
	C�κ���ϰ1Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�κ���ϰ1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // �κ���ϰ1View.cpp �еĵ��԰汾
inline C�κ���ϰ1Doc* C�κ���ϰ1View::GetDocument() const
   { return reinterpret_cast<C�κ���ϰ1Doc*>(m_pDocument); }
#endif

