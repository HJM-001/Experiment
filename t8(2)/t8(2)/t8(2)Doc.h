
// t8(2)Doc.h : Ct82Doc ��Ľӿ�
//


#pragma once


class Ct82Doc : public CDocument
{
protected: // �������л�����
	Ct82Doc();
	DECLARE_DYNCREATE(Ct82Doc)

// ����
public:

// ����
public:
	CRect cr,ty;
	boolean t,r,e,s;
	CArray<CRect, CRect&>lis;
	int tyzx, tyzy, tyyx, tyyy, ysr, ysg, ysb,a;
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
	virtual ~Ct82Doc();
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
