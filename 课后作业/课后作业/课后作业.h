
// �κ���ҵ.h : �κ���ҵ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�κ���ҵApp:
// �йش����ʵ�֣������ �κ���ҵ.cpp
//

class C�κ���ҵApp : public CWinApp
{
public:
	C�κ���ҵApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�κ���ҵApp theApp;
