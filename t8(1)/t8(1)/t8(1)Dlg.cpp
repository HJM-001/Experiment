
// t8(1)Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "t8(1).h"
#include "t8(1)Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// Ct81Dlg �Ի���



Ct81Dlg::Ct81Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_T81_DIALOG, pParent)
	, a(0)
	, b(0)
	, c(0)
	, x(_T(""))
	, z(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void Ct81Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);

	DDX_Control(pDX, IDC_COMBO1, y);
	DDX_Text(pDX, IDC_EDIT4, z);
}

BEGIN_MESSAGE_MAP(Ct81Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON2, &Ct81Dlg::OnBnClickedButton2)

END_MESSAGE_MAP()


// Ct81Dlg ��Ϣ�������

BOOL Ct81Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO: �ڴ���Ӷ���ĳ�ʼ������

	y.AddString(_T("+"));
	y.AddString(_T("-"));
	y.AddString(_T("��"));
	y.AddString(_T("��"));
	y.AddString(_T("��"));
	y.AddString(_T("-1"));
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void Ct81Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void Ct81Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR Ct81Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void Ct81Dlg::OnBnClickedButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������

	int n = y.GetCurSel();
	CString s;
	y.GetLBText(n,s);
	if (s.Compare(_T("+"))==0)
	{
		UpdateData(true);
		c = a + b;
		z = _T("");
			UpdateData(false);
	}
	if (s.Compare(_T("-"))==0)
	{
		UpdateData(true);
		c = a - b;
		z = _T("");
		UpdateData(false);
	}
	if (s.Compare(_T("��")) == 0)
	{
		UpdateData(true);
		c = a*b;
		z = _T("");
		UpdateData(false);
	}
	if (s.Compare(_T("��")) == 0)
	{	UpdateData(true);
	if (b == 0)
	{
		z = _T("0������Ϊ����");
		c = 0;
	}
	else
	{
	
		c = a*1.0 / b;
		z = _T("");
		
	}
		UpdateData(false);
	}
	if (s.Compare(_T("��")) == 0)
	{
		UpdateData(true);
		if (a < 0)
		{
			z = _T("����������Ϊ����");
			c = 0;

		}
		else
		{
			c = sqrt(a);
			
			z = _T("");
		}
		b = 0;
		UpdateData(false);
	}
	if (s.Compare(_T("-1")) == 0)
	{
		UpdateData(true);
		if (a == 0 || b == 0)
		{
			z = _T("0����������");
			c = 0;
		}
		else
		{
			c = b*1.0 / a;
			z = _T("");
		}
		UpdateData(false);
	}
}



