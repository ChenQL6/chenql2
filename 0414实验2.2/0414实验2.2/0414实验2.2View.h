
// 0414ʵ��2.2View.h : CMy0414ʵ��22View ��Ľӿ�
//

#pragma once


class CMy0414ʵ��22View : public CView
{
protected: // �������л�����
	CMy0414ʵ��22View();
	DECLARE_DYNCREATE(CMy0414ʵ��22View)

// ����
public:
	CMy0414ʵ��22Doc* GetDocument() const;

// ����
public:
	CRect cr;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0414ʵ��22View();
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
};

#ifndef _DEBUG  // 0414ʵ��2.2View.cpp �еĵ��԰汾
inline CMy0414ʵ��22Doc* CMy0414ʵ��22View::GetDocument() const
   { return reinterpret_cast<CMy0414ʵ��22Doc*>(m_pDocument); }
#endif

