
// �κ���ϰ1.h : �κ���ϰ1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�κ���ϰ1App:
// �йش����ʵ�֣������ �κ���ϰ1.cpp
//

class C�κ���ϰ1App : public CWinApp
{
public:
	C�κ���ϰ1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�κ���ϰ1App theApp;
