
// 0330课堂实验1（图像编程）View.h : CMy0330课堂实验1（图像编程）View 类的接口
//

#pragma once


class CMy0330课堂实验1（图像编程）View : public CView
{
protected: // 仅从序列化创建
	CMy0330课堂实验1（图像编程）View();
	DECLARE_DYNCREATE(CMy0330课堂实验1（图像编程）View)

// 特性
public:
	CMy0330课堂实验1（图像编程）Doc* GetDocument() const;

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
	virtual ~CMy0330课堂实验1（图像编程）View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	POINT a;

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileOpen();
};

#ifndef _DEBUG  // 0330课堂实验1（图像编程）View.cpp 中的调试版本
inline CMy0330课堂实验1（图像编程）Doc* CMy0330课堂实验1（图像编程）View::GetDocument() const
   { return reinterpret_cast<CMy0330课堂实验1（图像编程）Doc*>(m_pDocument); }
#endif

