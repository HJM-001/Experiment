
// �κ���ϰ9View.h : C�κ���ϰ9View ��Ľӿ�
//

#pragma once


class C�κ���ϰ9View : public CView
{
protected: // �������л�����
	C�κ���ϰ9View();
	DECLARE_DYNCREATE(C�κ���ϰ9View)

// ����
public:
	C�κ���ϰ9Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~C�κ���ϰ9View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onlujing();
	afx_msg void Onxianshi();

	afx_msg void OnBnClickedButton1();
};

#ifndef _DEBUG  // �κ���ϰ9View.cpp �еĵ��԰汾
inline C�κ���ϰ9Doc* C�κ���ϰ9View::GetDocument() const
   { return reinterpret_cast<C�κ���ϰ9Doc*>(m_pDocument); }
#endif

