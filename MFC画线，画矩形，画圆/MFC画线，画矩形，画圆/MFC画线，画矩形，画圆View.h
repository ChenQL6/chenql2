
// MFC画线，画矩形，画圆View.h : CMFC画线，画矩形，画圆View 类的接口
//

#pragma once


class CMFC画线，画矩形，画圆View : public CView
{
protected: // 仅从序列化创建
	CMFC画线，画矩形，画圆View();
	DECLARE_DYNCREATE(CMFC画线，画矩形，画圆View)

// 特性
public:
	CMFC画线，画矩形，画圆Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMFC画线，画矩形，画圆View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLine();
	afx_msg void OnRectangle();
	afx_msg void OnEllipse();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // MFC画线，画矩形，画圆View.cpp 中的调试版本
inline CMFC画线，画矩形，画圆Doc* CMFC画线，画矩形，画圆View::GetDocument() const
   { return reinterpret_cast<CMFC画线，画矩形，画圆Doc*>(m_pDocument); }
#endif

