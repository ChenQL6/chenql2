
// ʵ��3.3View.h : Cʵ��33View ��Ľӿ�
//

#pragma once


class Cʵ��33View : public CView
{
protected: // �������л�����
	Cʵ��33View();
	DECLARE_DYNCREATE(Cʵ��33View)

// ����
public:
	Cʵ��33Doc* GetDocument() const;

// ����
public:
	int N;
	CArray<CRect, CRect> cr;
	bool set;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~Cʵ��33View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // ʵ��3.3View.cpp �еĵ��԰汾
inline Cʵ��33Doc* Cʵ��33View::GetDocument() const
   { return reinterpret_cast<Cʵ��33Doc*>(m_pDocument); }
#endif

