
// 0414实验1View.h : CMy0414实验1View 类的接口
//

#pragma once


class CMy0414实验1View : public CView
{
protected: // 仅从序列化创建
	CMy0414实验1View();
	DECLARE_DYNCREATE(CMy0414实验1View)

// 特性
public:
	CMy0414实验1Doc* GetDocument() const;

// 操作
public:
	CString filename;

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
	virtual ~CMy0414实验1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // 0414实验1View.cpp 中的调试版本
inline CMy0414实验1Doc* CMy0414实验1View::GetDocument() const
   { return reinterpret_cast<CMy0414实验1Doc*>(m_pDocument); }
#endif

