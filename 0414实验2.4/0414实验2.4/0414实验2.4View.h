
// 0414ʵ��2.4View.h : CMy0414ʵ��24View ��Ľӿ�
//

#pragma once


class CMy0414ʵ��24View : public CView
{
protected: // �������л�����
	CMy0414ʵ��24View();
	DECLARE_DYNCREATE(CMy0414ʵ��24View)

// ����
public:
	CMy0414ʵ��24Doc* GetDocument() const;

// ����
public:
	CRect cr;
	int r, g, b;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0414ʵ��24View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0414ʵ��2.4View.cpp �еĵ��԰汾
inline CMy0414ʵ��24Doc* CMy0414ʵ��24View::GetDocument() const
   { return reinterpret_cast<CMy0414ʵ��24Doc*>(m_pDocument); }
#endif

