#pragma once


// diolog �Ի���

class diolog : public CDialogEx
{
	DECLARE_DYNAMIC(diolog)

public:
	diolog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~diolog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString s1;
	CString s2;
	afx_msg void OnBnClickedButton2();
};
