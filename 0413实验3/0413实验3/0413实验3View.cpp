
// 0413实验3View.cpp : CMy0413实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0413实验3.h"
#endif

#include "0413实验3Doc.h"
#include "0413实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMy0413实验3View

IMPLEMENT_DYNCREATE(CMy0413实验3View, CView)

BEGIN_MESSAGE_MAP(CMy0413实验3View, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CMy0413实验3View 构造/析构

CMy0413实验3View::CMy0413实验3View()
{
	// TODO: 在此处添加构造代码
	flag = 0;
	satus = 0;
	set = true;
	cr.left = 200;
	cr.top = 300;
	cr.right = 220;
	cr.bottom = 320;

}

CMy0413实验3View::~CMy0413实验3View()
{
}

BOOL CMy0413实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0413实验3View 绘制

void CMy0413实验3View::OnDraw(CDC* pDC)
{
	CMy0413实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	if (set)
	{
		SetTimer(0, 180, NULL);
		set = false;
	}
	pDC->Ellipse(cr);
}


// CMy0413实验3View 诊断

#ifdef _DEBUG
void CMy0413实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413实验3Doc* CMy0413实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413实验3Doc)));
	return (CMy0413实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413实验3View 消息处理程序

void CMy0413实验3View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cc;
	GetClientRect(&cc);
	if (satus == 1)
	{
		if (flag == 0 && cr.right < (cc.right - cc.left))
		{
			cr.left += 10;
			cr.right += 10;
		}
		else flag += 1;
		if (flag >= 1 && cr.left>0)
		{
			cr.right -= 10;
			cr.left -= 10;
		}
		else flag = 0;
	}
	Invalidate();

	CView::OnTimer(nIDEvent);
}



void CMy0413实验3View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	satus = 0;

	CView::OnLButtonDblClk(nFlags, point);
}


void CMy0413实验3View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	satus = 1;

	CView::OnLButtonDown(nFlags, point);
}