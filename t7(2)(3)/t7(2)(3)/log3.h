#pragma once


// log3 �Ի���

class log3 : public CDialogEx
{
	DECLARE_DYNAMIC(log3)

public:
	log3(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~log3();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int x;
	int y;
	int z;
	afx_msg void OnBnClickedButton1();
};
