
// MFC添加菜单资源，显示名字View.h : CMFC添加菜单资源，显示名字View 类的接口
//

#pragma once


class CMFC添加菜单资源，显示名字View : public CView
{
protected: // 仅从序列化创建
	CMFC添加菜单资源，显示名字View();
	DECLARE_DYNCREATE(CMFC添加菜单资源，显示名字View)

// 特性
public:
	CMFC添加菜单资源，显示名字Doc* GetDocument() const;

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
	virtual ~CMFC添加菜单资源，显示名字View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // MFC添加菜单资源，显示名字View.cpp 中的调试版本
inline CMFC添加菜单资源，显示名字Doc* CMFC添加菜单资源，显示名字View::GetDocument() const
   { return reinterpret_cast<CMFC添加菜单资源，显示名字Doc*>(m_pDocument); }
#endif

