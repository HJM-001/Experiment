
// t7(4)View.h : Ct74View ��Ľӿ�
//

#pragma once


class Ct74View : public CView
{
protected: // �������л�����
	Ct74View();
	DECLARE_DYNCREATE(Ct74View)

// ����
public:
	Ct74Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Ct74View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void Onljie();
};

#ifndef _DEBUG  // t7(4)View.cpp �еĵ��԰汾
inline Ct74Doc* Ct74View::GetDocument() const
   { return reinterpret_cast<Ct74Doc*>(m_pDocument); }
#endif

