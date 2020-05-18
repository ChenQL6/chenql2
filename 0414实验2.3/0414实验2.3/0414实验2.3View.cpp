
// 0414实验2.3View.cpp : CMy0414实验23View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0414实验2.3.h"
#endif

#include "0414实验2.3Doc.h"
#include "0414实验2.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414实验23View

IMPLEMENT_DYNCREATE(CMy0414实验23View, CView)

BEGIN_MESSAGE_MAP(CMy0414实验23View, CView)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0414实验23View 构造/析构

CMy0414实验23View::CMy0414实验23View()
{
	// TODO: 在此处添加构造代码
	cr.left = 100;
	cr.top = 300;
	cr.right = 400;
	cr.bottom = 500;

}

CMy0414实验23View::~CMy0414实验23View()
{
}

BOOL CMy0414实验23View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0414实验23View 绘制

void CMy0414实验23View::OnDraw(CDC* pDC)
{
	CMy0414实验23Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(&cr);

}


// CMy0414实验23View 诊断

#ifdef _DEBUG
void CMy0414实验23View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414实验23View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414实验23Doc* CMy0414实验23View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414实验23Doc)));
	return (CMy0414实验23Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414实验23View 消息处理程序


void CMy0414实验23View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CClientDC dc(this);
	
	CPen newpen(PS_DASH, 1, RGB(200, 100, 100));
	CPen *oldpen = dc.SelectObject(&newpen);

	dc.Rectangle(100, 300, 400, 500);
	dc.Ellipse(100, 300, 400, 500);

	dc.SelectObject(oldpen);
	CView::OnLButtonDown(nFlags, point);
}
