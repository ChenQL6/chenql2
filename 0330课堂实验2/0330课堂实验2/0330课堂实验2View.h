
// 0330����ʵ��2View.h : CMy0330����ʵ��2View ��Ľӿ�
//

#pragma once


class CMy0330����ʵ��2View : public CView
{
protected: // �������л�����
	CMy0330����ʵ��2View();
	DECLARE_DYNCREATE(CMy0330����ʵ��2View)

// ����
public:
	CMy0330����ʵ��2Doc* GetDocument() const;

// ����
public:
	CRect cr;
	CString filename;
	POINT a;
	int flag;
	CImage img;

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// ʵ��
public:
	virtual ~CMy0330����ʵ��2View();
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

#ifndef _DEBUG  // 0330����ʵ��2View.cpp �еĵ��԰汾
inline CMy0330����ʵ��2Doc* CMy0330����ʵ��2View::GetDocument() const
   { return reinterpret_cast<CMy0330����ʵ��2Doc*>(m_pDocument); }
#endif

