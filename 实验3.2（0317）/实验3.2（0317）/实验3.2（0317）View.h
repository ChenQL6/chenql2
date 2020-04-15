
// 实验3.2（0317）View.h : C实验32（0317）View 类的接口
//

#pragma once


class C实验32（0317）View : public CView
{
protected: // 仅从序列化创建
	C实验32（0317）View();
	DECLARE_DYNCREATE(C实验32（0317）View)

// 特性
public:
	C实验32（0317）Doc* GetDocument() const;

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
	virtual ~C实验32（0317）View();
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
	afx_msg void OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags);
};

#ifndef _DEBUG  // 实验3.2（0317）View.cpp 中的调试版本
inline C实验32（0317）Doc* C实验32（0317）View::GetDocument() const
   { return reinterpret_cast<C实验32（0317）Doc*>(m_pDocument); }
#endif

