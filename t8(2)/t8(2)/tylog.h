#pragma once


// tylog �Ի���

class tylog : public CDialogEx
{
	DECLARE_DYNAMIC(tylog)

public:
	tylog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~tylog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnEnChangeEdit3();
	int zx;
	int zy;
	int yx;
	int yy;
};
