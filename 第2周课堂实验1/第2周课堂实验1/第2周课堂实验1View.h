
// ��2�ܿ���ʵ��1View.h : C��2�ܿ���ʵ��1View ��Ľӿ�
//

#pragma once


class C��2�ܿ���ʵ��1View : public CView
{
protected: // �������л�����
	C��2�ܿ���ʵ��1View();
	DECLARE_DYNCREATE(C��2�ܿ���ʵ��1View)

// ����
public:
	C��2�ܿ���ʵ��1Doc* GetDocument() const;

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
	virtual ~C��2�ܿ���ʵ��1View();
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
};

#ifndef _DEBUG  // ��2�ܿ���ʵ��1View.cpp �еĵ��԰汾
inline C��2�ܿ���ʵ��1Doc* C��2�ܿ���ʵ��1View::GetDocument() const
   { return reinterpret_cast<C��2�ܿ���ʵ��1Doc*>(m_pDocument); }
#endif

