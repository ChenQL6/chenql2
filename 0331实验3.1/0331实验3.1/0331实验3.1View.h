
// 0331ʵ��3.1View.h : CMy0331ʵ��31View ��Ľӿ�
//

#pragma once


class CMy0331ʵ��31View : public CView
{
protected: // �������л�����
	CMy0331ʵ��31View();
	DECLARE_DYNCREATE(CMy0331ʵ��31View)

// ����
public:
	CMy0331ʵ��31Doc* GetDocument() const;

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
	virtual ~CMy0331ʵ��31View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 0331ʵ��3.1View.cpp �еĵ��԰汾
inline CMy0331ʵ��31Doc* CMy0331ʵ��31View::GetDocument() const
   { return reinterpret_cast<CMy0331ʵ��31Doc*>(m_pDocument); }
#endif

