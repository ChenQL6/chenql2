
// 0413ʵ��3View.h : CMy0413ʵ��3View ��Ľӿ�
//

#pragma once


class CMy0413ʵ��3View : public CView
{
protected: // �������л�����
	CMy0413ʵ��3View();
	DECLARE_DYNCREATE(CMy0413ʵ��3View)

// ����
public:
	CMy0413ʵ��3Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0413ʵ��3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	int satus;
	int flag;
	CRect cr;
	bool set;


protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 0413ʵ��3View.cpp �еĵ��԰汾
inline CMy0413ʵ��3Doc* CMy0413ʵ��3View::GetDocument() const
   { return reinterpret_cast<CMy0413ʵ��3Doc*>(m_pDocument); }
#endif

