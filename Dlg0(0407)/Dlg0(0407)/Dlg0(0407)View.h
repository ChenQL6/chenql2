
// Dlg0(0407)View.h : CDlg00407View ��Ľӿ�
//

#pragma once
#include "MyDlg0.h"

class CDlg00407View : public CView
{
protected: // �������л�����
	CDlg00407View();
	DECLARE_DYNCREATE(CDlg00407View)

// ����
public:
	CDlg00407Doc* GetDocument() const;

// ����
public:
	CString s;
	int show_hide;
	MyDlg0 *pD;
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
	virtual ~CDlg00407View();
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
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);

};

#ifndef _DEBUG  // Dlg0(0407)View.cpp �еĵ��԰汾
inline CDlg00407Doc* CDlg00407View::GetDocument() const
   { return reinterpret_cast<CDlg00407Doc*>(m_pDocument); }
#endif

