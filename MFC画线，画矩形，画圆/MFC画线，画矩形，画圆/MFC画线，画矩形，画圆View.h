
// MFC���ߣ������Σ���ԲView.h : CMFC���ߣ������Σ���ԲView ��Ľӿ�
//

#pragma once


class CMFC���ߣ������Σ���ԲView : public CView
{
protected: // �������л�����
	CMFC���ߣ������Σ���ԲView();
	DECLARE_DYNCREATE(CMFC���ߣ������Σ���ԲView)

// ����
public:
	CMFC���ߣ������Σ���ԲDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMFC���ߣ������Σ���ԲView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnEllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC���ߣ������Σ���ԲView.cpp �еĵ��԰汾
inline CMFC���ߣ������Σ���ԲDoc* CMFC���ߣ������Σ���ԲView::GetDocument() const
   { return reinterpret_cast<CMFC���ߣ������Σ���ԲDoc*>(m_pDocument); }
#endif

