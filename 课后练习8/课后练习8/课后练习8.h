
// �κ���ϰ8.h : �κ���ϰ8 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�κ���ϰ8App:
// �йش����ʵ�֣������ �κ���ϰ8.cpp
//

class C�κ���ϰ8App : public CWinApp
{
public:
	C�κ���ϰ8App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�κ���ϰ8App theApp;
