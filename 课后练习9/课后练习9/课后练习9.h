
// �κ���ϰ9.h : �κ���ϰ9 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C�κ���ϰ9App:
// �йش����ʵ�֣������ �κ���ϰ9.cpp
//

class C�κ���ϰ9App : public CWinApp
{
public:
	C�κ���ϰ9App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C�κ���ϰ9App theApp;
