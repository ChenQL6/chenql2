
// Dlg1(0407)View.h : CDlg10407View 类的接口
//

#pragma once


class CDlg10407View : public CView
{
protected: // 仅从序列化创建
	CDlg10407View();
	DECLARE_DYNCREATE(CDlg10407View)

// 特性
public:
	CDlg10407Doc* GetDocument() const;

// 操作
public:

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
	virtual ~CDlg10407View();
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
};

#ifndef _DEBUG  // Dlg1(0407)View.cpp 中的调试版本
inline CDlg10407Doc* CDlg10407View::GetDocument() const
   { return reinterpret_cast<CDlg10407Doc*>(m_pDocument); }
#endif

