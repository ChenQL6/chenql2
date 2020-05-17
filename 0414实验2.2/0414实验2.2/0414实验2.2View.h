
// 0414实验2.2View.h : CMy0414实验22View 类的接口
//

#pragma once


class CMy0414实验22View : public CView
{
protected: // 仅从序列化创建
	CMy0414实验22View();
	DECLARE_DYNCREATE(CMy0414实验22View)

// 特性
public:
	CMy0414实验22Doc* GetDocument() const;

// 操作
public:
	CRect cr;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0414实验22View();
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

#ifndef _DEBUG  // 0414实验2.2View.cpp 中的调试版本
inline CMy0414实验22Doc* CMy0414实验22View::GetDocument() const
   { return reinterpret_cast<CMy0414实验22Doc*>(m_pDocument); }
#endif

