
// week9ʵ���ʵ��2View.h : Cweek9ʵ���ʵ��2View ��Ľӿ�
//

#pragma once


class Cweek9ʵ���ʵ��2View : public CView
{
protected: // �������л�����
	Cweek9ʵ���ʵ��2View();
	DECLARE_DYNCREATE(Cweek9ʵ���ʵ��2View)

// ����
public:
	Cweek9ʵ���ʵ��2Doc* GetDocument() const;

// ����
public:
	CRect cr;
	CPoint a;
	int flag;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~Cweek9ʵ���ʵ��2View();
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
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // week9ʵ���ʵ��2View.cpp �еĵ��԰汾
inline Cweek9ʵ���ʵ��2Doc* Cweek9ʵ���ʵ��2View::GetDocument() const
   { return reinterpret_cast<Cweek9ʵ���ʵ��2Doc*>(m_pDocument); }
#endif

