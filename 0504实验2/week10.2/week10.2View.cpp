
// week10.2View.cpp : Cweek102View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "week10.2.h"
#endif

#include "week10.2Doc.h"
#include "week10.2View.h"
#include "win32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Cweek102View

IMPLEMENT_DYNCREATE(Cweek102View, CView)

BEGIN_MESSAGE_MAP(Cweek102View, CView)
END_MESSAGE_MAP()

// Cweek102View 构造/析构

Cweek102View::Cweek102View()
{
	// TODO: 在此处添加构造代码

}

Cweek102View::~Cweek102View()
{
}

BOOL Cweek102View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// Cweek102View 绘制

void Cweek102View::OnDraw(CDC* pDC)
{
	Cweek102Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CString s;
	FAC f;
	s.Format(_T("%f"), f.convert(30.0));
	pDC->TextOutW(300, 300, s);

}


// Cweek102View 诊断

#ifdef _DEBUG
void Cweek102View::AssertValid() const
{
	CView::AssertValid();
}

void Cweek102View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

Cweek102Doc* Cweek102View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(Cweek102Doc)));
	return (Cweek102Doc*)m_pDocument;
}
#endif //_DEBUG


// Cweek102View 消息处理程序
