
// 综合实验View.h : C综合实验View 类的接口
//

#pragma once

class C综合实验Set;

class C综合实验View : public CRecordView
{
protected: // 仅从序列化创建
	C综合实验View();
	DECLARE_DYNCREATE(C综合实验View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_MY_FORM };
#endif
	C综合实验Set* m_pSet;

// 特性
public:
	C综合实验Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用

// 实现
public:
	virtual ~C综合实验View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // 综合实验View.cpp 中的调试版本
inline C综合实验Doc* C综合实验View::GetDocument() const
   { return reinterpret_cast<C综合实验Doc*>(m_pDocument); }
#endif

