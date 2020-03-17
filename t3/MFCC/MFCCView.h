
// MFCCView.h : CMFCCView 类的接口
//

#pragma once


class CMFCCView : public CView
{
protected: // 仅从序列化创建
	CMFCCView();
	DECLARE_DYNCREATE(CMFCCView)

// 特性
public:
	CMFCCDoc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFCCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // MFCCView.cpp 中的调试版本
inline CMFCCDoc* CMFCCView::GetDocument() const
   { return reinterpret_cast<CMFCCDoc*>(m_pDocument); }
#endif

