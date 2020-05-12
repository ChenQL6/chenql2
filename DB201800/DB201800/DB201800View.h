
// DB201800View.h : CDB201800View 类的接口
//

#pragma once

class CDB201800Set;

class CDB201800View : public CRecordView
{
protected: // 仅从序列化创建
	CDB201800View();
	DECLARE_DYNCREATE(CDB201800View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB201800_FORM };
#endif
	CDB201800Set* m_pSet;

// 特性
public:
	CDB201800Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	virtual void OnInitialUpdate(); // 构造后第一次调用
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CDB201800View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString phoneNum;
};

#ifndef _DEBUG  // DB201800View.cpp 中的调试版本
inline CDB201800Doc* CDB201800View::GetDocument() const
   { return reinterpret_cast<CDB201800Doc*>(m_pDocument); }
#endif

