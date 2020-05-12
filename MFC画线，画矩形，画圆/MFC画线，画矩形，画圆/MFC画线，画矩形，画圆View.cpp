
// MFC画线，画矩形，画圆View.cpp : CMFC画线，画矩形，画圆View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC画线，画矩形，画圆.h"
#endif

#include "MFC画线，画矩形，画圆Doc.h"
#include "MFC画线，画矩形，画圆View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC画线，画矩形，画圆View

IMPLEMENT_DYNCREATE(CMFC画线，画矩形，画圆View, CView)

BEGIN_MESSAGE_MAP(CMFC画线，画矩形，画圆View, CView)
	ON_COMMAND(ID_Line, &CMFC画线，画矩形，画圆View::OnLine)
	ON_COMMAND(ID_Rectangle, &CMFC画线，画矩形，画圆View::OnRectangle)
	ON_COMMAND(ID_Ellipse, &CMFC画线，画矩形，画圆View::OnEllipse)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMFC画线，画矩形，画圆View 构造/析构

CMFC画线，画矩形，画圆View::CMFC画线，画矩形，画圆View()
{
	// TODO: 在此处添加构造代码

}

CMFC画线，画矩形，画圆View::~CMFC画线，画矩形，画圆View()
{
}

BOOL CMFC画线，画矩形，画圆View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC画线，画矩形，画圆View 绘制

void CMFC画线，画矩形，画圆View::OnDraw(CDC* pDC)
{
	CMFC画线，画矩形，画圆Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (pDoc->flag == 1)
	{
		pDC->MoveTo(pDoc->a);
		pDC->LineTo(pDoc->b);
	}

	if (pDoc->flag == 2)
	{
		pDC->Rectangle(pDoc->a.x, pDoc->a.y, pDoc->b.x, pDoc->b.y);
	}

	if (pDoc->flag == 3)
	{
		pDC->Ellipse(pDoc->a.x, pDoc->a.y, pDoc->b.x, pDoc->b.y);
	}
}


// CMFC画线，画矩形，画圆View 诊断

#ifdef _DEBUG
void CMFC画线，画矩形，画圆View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC画线，画矩形，画圆View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC画线，画矩形，画圆Doc* CMFC画线，画矩形，画圆View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC画线，画矩形，画圆Doc)));
	return (CMFC画线，画矩形，画圆Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC画线，画矩形，画圆View 消息处理程序


void CMFC画线，画矩形，画圆View::OnLine()
{
	// TODO: 在此添加命令处理程序代码
	CMFC画线，画矩形，画圆Doc* pDoc = GetDocument();
	pDoc->flag = 1;
}


void CMFC画线，画矩形，画圆View::OnRectangle()
{
	// TODO: 在此添加命令处理程序代码
	CMFC画线，画矩形，画圆Doc* pDoc = GetDocument();
	pDoc->flag = 2;
}


void CMFC画线，画矩形，画圆View::OnEllipse()
{
	// TODO: 在此添加命令处理程序代码
	CMFC画线，画矩形，画圆Doc* pDoc = GetDocument();
	pDoc->flag = 3;
}


void CMFC画线，画矩形，画圆View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC画线，画矩形，画圆Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect c1;
	this->GetClientRect(&c1);
	pDoc->a.x = point.x;
	pDoc->a.y = point.y;

	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void CMFC画线，画矩形，画圆View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFC画线，画矩形，画圆Doc* pDoc = GetDocument();
	CClientDC dc(this);
	CRect c2;
	this->GetClientRect(&c2);
	pDoc->b.x = point.x;
	pDoc->b.y = point.y;

	Invalidate();


	CView::OnLButtonUp(nFlags, point);
}
