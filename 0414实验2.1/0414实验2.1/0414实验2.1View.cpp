
// 0414实验2.1View.cpp : CMy0414实验21View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0414实验2.1.h"
#endif

#include "0414实验2.1Doc.h"
#include "0414实验2.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414实验21View

IMPLEMENT_DYNCREATE(CMy0414实验21View, CView)

BEGIN_MESSAGE_MAP(CMy0414实验21View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy0414实验21View 构造/析构

CMy0414实验21View::CMy0414实验21View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
}

CMy0414实验21View::~CMy0414实验21View()
{
}

BOOL CMy0414实验21View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0414实验21View 绘制

void CMy0414实验21View::OnDraw(CDC* pDC)
{
	CMy0414实验21Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect cr(a,b);
	pDC->Ellipse(&cr);

}


// CMy0414实验21View 诊断

#ifdef _DEBUG
void CMy0414实验21View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414实验21View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414实验21Doc* CMy0414实验21View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414实验21Doc)));
	return (CMy0414实验21Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414实验21View 消息处理程序


void CMy0414实验21View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	a = point;
	flag = 1;

	CView::OnLButtonDown(nFlags, point);
}


void CMy0414实验21View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	if (flag == 1)
	{
		b = point;
		Invalidate();
	}

	CView::OnMouseMove(nFlags, point);
}


void CMy0414实验21View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	b = point;
	flag = 0;
	Invalidate();

	CView::OnLButtonUp(nFlags, point);
}
