
// MFCpractice5View.h : CMFCpractice5View 类的接口
//

#pragma once


class CMFCpractice5View : public CView
{
protected: // 仅从序列化创建
	CMFCpractice5View();
	DECLARE_DYNCREATE(CMFCpractice5View)

// 特性
public:
	CMFCpractice5Doc* GetDocument() const;

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
	virtual ~CMFCpractice5View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFCpractice5View.cpp 中的调试版本
inline CMFCpractice5Doc* CMFCpractice5View::GetDocument() const
   { return reinterpret_cast<CMFCpractice5Doc*>(m_pDocument); }
#endif

