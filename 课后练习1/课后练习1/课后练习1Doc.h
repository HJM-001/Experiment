
// �κ���ϰ1Doc.h : C�κ���ϰ1Doc ��Ľӿ�
//


#pragma once


class C�κ���ϰ1Doc : public CDocument
{
protected: // �������л�����
	C�κ���ϰ1Doc();
	DECLARE_DYNCREATE(C�κ���ϰ1Doc)

// ����
public:

// ����
public:
	int w, h, sx, sy;
	boolean t;
	CImage img;
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
	virtual ~C�κ���ϰ1Doc();
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
