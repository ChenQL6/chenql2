
// MFCpractice5View.h : CMFCpractice5View ��Ľӿ�
//

#pragma once


class CMFCpractice5View : public CView
{
protected: // �������л�����
	CMFCpractice5View();
	DECLARE_DYNCREATE(CMFCpractice5View)

// ����
public:
	CMFCpractice5Doc* GetDocument() const;

// ����
public:

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
	virtual ~CMFCpractice5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCpractice5View.cpp �еĵ��԰汾
inline CMFCpractice5Doc* CMFCpractice5View::GetDocument() const
   { return reinterpret_cast<CMFCpractice5Doc*>(m_pDocument); }
#endif

