
// t7(2)(3).h : t7(2)(3) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Ct723App:
// �йش����ʵ�֣������ t7(2)(3).cpp
//

class Ct723App : public CWinApp
{
public:
	Ct723App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Ct723App theApp;
