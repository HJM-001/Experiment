
// t2Doc.h : Ct2Doc ��Ľӿ�
//


#pragma once


class Ct2Doc : public CDocument
{
protected: // �������л�����
	Ct2Doc();
	DECLARE_DYNCREATE(Ct2Doc)

// ����g
public:

// ����
public:
	int count;
	CString z,x,m,v;
	
	int A, B;
	int a, b;
	CRect c1, c2, c3,c4;

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Ct2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
