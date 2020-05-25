
// week10View.cpp : Cweek10View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week10.h"
#endif

#include "week10Doc.h"
#include "week10View.h"
#include "w32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek10View

IMPLEMENT_DYNCREATE(Cweek10View, CView)

BEGIN_MESSAGE_MAP(Cweek10View, CView)
END_MESSAGE_MAP()

// Cweek10View 构造/析构

Cweek10View::Cweek10View()
{
	// TODO: 在此处添加构造代码

}

Cweek10View::~Cweek10View()
{
}

BOOL Cweek10View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek10View 绘制

void Cweek10View::OnDraw(CDC* pDC)
{
	Cweek10Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	T cc;
	s.Format(_T("%d"), cc.factorial(5));
	pDC->TextOutW(200, 300, s);
}


// Cweek10View 诊断

#ifdef _DEBUG
void Cweek10View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek10View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek10Doc* Cweek10View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek10Doc)));
	return (Cweek10Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek10View 消息处理程序
