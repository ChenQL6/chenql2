
// 第2周课堂实验4View.h : C第2周课堂实验4View 类的接口
//

#pragma once


class C第2周课堂实验4View : public CView
{
protected: // 仅从序列化创建
	C第2周课堂实验4View();
	DECLARE_DYNCREATE(C第2周课堂实验4View)

// 特性
public:
	C第2周课堂实验4Doc* GetDocument() const;

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
	virtual ~C第2周课堂实验4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 第2周课堂实验4View.cpp 中的调试版本
inline C第2周课堂实验4Doc* C第2周课堂实验4View::GetDocument() const
   { return reinterpret_cast<C第2周课堂实验4Doc*>(m_pDocument); }
#endif

