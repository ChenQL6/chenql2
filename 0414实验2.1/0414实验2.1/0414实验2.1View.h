
// 0414实验2.1View.h : CMy0414实验21View 类的接口
//

#pragma once


class CMy0414实验21View : public CView
{
protected: // 仅从序列化创建
	CMy0414实验21View();
	DECLARE_DYNCREATE(CMy0414实验21View)

// 特性
public:
	CMy0414实验21Doc* GetDocument() const;

// 操作
public:
	CPoint a, b;
	int flag;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CMy0414实验21View();
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
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // 0414实验2.1View.cpp 中的调试版本
inline CMy0414实验21Doc* CMy0414实验21View::GetDocument() const
   { return reinterpret_cast<CMy0414实验21Doc*>(m_pDocument); }
#endif

