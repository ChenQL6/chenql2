
// MFC���ߣ������Σ���ԲDoc.h : CMFC���ߣ������Σ���ԲDoc ��Ľӿ�
//


#pragma once


class CMFC���ߣ������Σ���ԲDoc : public CDocument
{
protected: // �������л�����
	CMFC���ߣ������Σ���ԲDoc();
	DECLARE_DYNCREATE(CMFC���ߣ������Σ���ԲDoc)

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
	virtual ~CMFC���ߣ������Σ���ԲDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	int flag;
	CPoint a, b;

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
