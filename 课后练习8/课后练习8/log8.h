#pragma once
#include "afxwin.h"


// log8 �Ի���

class log8 : public CDialogEx
{
	DECLARE_DYNAMIC(log8)

public:
	log8(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~log8();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString a;
	CListBox b;
	virtual BOOL OnInitDialog();
};
