#pragma once


// yslog �Ի���

class yslog : public CDialogEx
{
	DECLARE_DYNAMIC(yslog)

public:
	yslog(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~yslog();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	int r;
	int g;
	int b;
};
