#pragma once


// log4 �Ի���

class log4 : public CDialogEx
{
	DECLARE_DYNAMIC(log4)

public:
	log4(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~log4();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString z;
	int x;
	CString c;
	afx_msg void OnBnClickedButton1();
};
