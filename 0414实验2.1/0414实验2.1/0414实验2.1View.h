
// 0414ʵ��2.1View.h : CMy0414ʵ��21View ��Ľӿ�
//

#pragma once


class CMy0414ʵ��21View : public CView
{
protected: // �������л�����
	CMy0414ʵ��21View();
	DECLARE_DYNCREATE(CMy0414ʵ��21View)

// ����
public:
	CMy0414ʵ��21Doc* GetDocument() const;

// ����
public:
	CPoint a, b;
	int flag;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0414ʵ��21View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0414ʵ��2.1View.cpp �еĵ��԰汾
inline CMy0414ʵ��21Doc* CMy0414ʵ��21View::GetDocument() const
   { return reinterpret_cast<CMy0414ʵ��21Doc*>(m_pDocument); }
#endif

