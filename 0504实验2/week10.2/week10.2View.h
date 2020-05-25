
// week10.2View.h : Cweek102View 类的接口
//

#pragma once


class Cweek102View : public CView
{
protected: // 仅从序列化创建
	Cweek102View();
	DECLARE_DYNCREATE(Cweek102View)

// 特性
public:
	Cweek102Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~Cweek102View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // week10.2View.cpp 中的调试版本
inline Cweek102Doc* Cweek102View::GetDocument() const
   { return reinterpret_cast<Cweek102Doc*>(m_pDocument); }
#endif

