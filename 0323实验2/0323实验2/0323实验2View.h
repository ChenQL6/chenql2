
// 0323实验2View.h : CMy0323实验2View 类的接口
//

#pragma once


class CMy0323实验2View : public CView
{
protected: // 仅从序列化创建
	CMy0323实验2View();
	DECLARE_DYNCREATE(CMy0323实验2View)

// 特性
public:
	CMy0323实验2Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0323实验2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 0323实验2View.cpp 中的调试版本
inline CMy0323实验2Doc* CMy0323实验2View::GetDocument() const
   { return reinterpret_cast<CMy0323实验2Doc*>(m_pDocument); }
#endif

