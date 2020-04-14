
// 实验3.3View.h : C实验33View 类的接口
//

#pragma once


class C实验33View : public CView
{
protected: // 仅从序列化创建
	C实验33View();
	DECLARE_DYNCREATE(C实验33View)

// 特性
public:
	C实验33Doc* GetDocument() const;

// 操作
public:
	int N;
	CArray<CRect, CRect> cr;
	bool set;

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
	virtual ~C实验33View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // 实验3.3View.cpp 中的调试版本
inline C实验33Doc* C实验33View::GetDocument() const
   { return reinterpret_cast<C实验33Doc*>(m_pDocument); }
#endif

