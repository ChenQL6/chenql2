
// Dlg0(0407)View.h : CDlg00407View 类的接口
//

#pragma once
#include "MyDlg0.h"

class CDlg00407View : public CView
{
protected: // 仅从序列化创建
	CDlg00407View();
	DECLARE_DYNCREATE(CDlg00407View)

// 特性
public:
	CDlg00407Doc* GetDocument() const;

// 操作
public:
	CString s;
	int show_hide;
	MyDlg0 *pD;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CDlg00407View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);

};

#ifndef _DEBUG  // Dlg0(0407)View.cpp 中的调试版本
inline CDlg00407Doc* CDlg00407View::GetDocument() const
   { return reinterpret_cast<CDlg00407Doc*>(m_pDocument); }
#endif

