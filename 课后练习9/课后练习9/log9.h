#pragma once


// log9 �Ի���

class log9 : public CDialogEx
{
	DECLARE_DYNAMIC(log9)

public:
	log9(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~log9();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	char s;
	virtual BOOL OnInitDialog();
	CString a;
	afx_msg void OnBnClickedButton1();
};
