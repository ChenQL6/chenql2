
// 0421ʵ��1View.h : CMy0421ʵ��1View ��Ľӿ�
//

#pragma once


class CMy0421ʵ��1View : public CView
{
protected: // �������л�����
	CMy0421ʵ��1View();
	DECLARE_DYNCREATE(CMy0421ʵ��1View)

// ����
public:
	CMy0421ʵ��1Doc* GetDocument() const;

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
	virtual ~CMy0421ʵ��1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 0421ʵ��1View.cpp �еĵ��԰汾
inline CMy0421ʵ��1Doc* CMy0421ʵ��1View::GetDocument() const
   { return reinterpret_cast<CMy0421ʵ��1Doc*>(m_pDocument); }
#endif

