
// ��2�ܿ���ʵ��1Doc.h : C��2�ܿ���ʵ��1Doc ��Ľӿ�
//


#pragma once


class C��2�ܿ���ʵ��1Doc : public CDocument
{
protected: // �������л�����
	C��2�ܿ���ʵ��1Doc();
	DECLARE_DYNCREATE(C��2�ܿ���ʵ��1Doc)

// ����
public:

// ����
public:

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
	virtual ~C��2�ܿ���ʵ��1Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int x;
	int y;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
