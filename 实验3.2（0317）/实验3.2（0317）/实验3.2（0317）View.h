
// ʵ��3.2��0317��View.h : Cʵ��32��0317��View ��Ľӿ�
//

#pragma once


class Cʵ��32��0317��View : public CView
{
protected: // �������л�����
	Cʵ��32��0317��View();
	DECLARE_DYNCREATE(Cʵ��32��0317��View)

// ����
public:
	Cʵ��32��0317��Doc* GetDocument() const;

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
	virtual ~Cʵ��32��0317��View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // ʵ��3.2��0317��View.cpp �еĵ��԰汾
inline Cʵ��32��0317��Doc* Cʵ��32��0317��View::GetDocument() const
   { return reinterpret_cast<Cʵ��32��0317��Doc*>(m_pDocument); }
#endif

