
// 0414实验2.4View.cpp : CMy0414实验24View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0414实验2.4.h"
#endif

#include "0414实验2.4Doc.h"
#include "0414实验2.4View.h"
#include "MyDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414实验24View

IMPLEMENT_DYNCREATE(CMy0414实验24View, CView)

BEGIN_MESSAGE_MAP(CMy0414实验24View, CView)
	ON_COMMAND(ID_POPOUT, &CMy0414实验24View::OnPopout)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CMy0414实验24View 构造/析构

CMy0414实验24View::CMy0414实验24View()
{
	// TODO: 在此处添加构造代码
	cr.SetRect(100, 300, 400,500);
	r = g = b = 0;
}

CMy0414实验24View::~CMy0414实验24View()
{
}

BOOL CMy0414实验24View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0414实验24View 绘制

void CMy0414实验24View::OnDraw(CDC* /*pDC*/)
{
	CMy0414实验24Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0414实验24View 诊断

#ifdef _DEBUG
void CMy0414实验24View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414实验24View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414实验24Doc* CMy0414实验24View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414实验24Doc)));
	return (CMy0414实验24Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414实验24View 消息处理程序


void CMy0414实验24View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	int r = dlg.DoModal();
	if(r == IDOK)
	{
		UpdateData(true);
		r = dlg.R;
		g = dlg.G;
		b = dlg.B;

	}
	CClientDC dc(this);
	CPen newpen(PS_SOLID, 1, RGB(0, 0, 0));
	CPen *oldpen = dc.SelectObject(&newpen);

	//dc.SelectObject(oldpen);
	dc.Ellipse(cr);
	CBrush newbrush(RGB(r, g, b));
	CBrush *oldbrush = dc.SelectObject(&newbrush);
	dc.Ellipse(cr);
	dc.SelectObject(oldbrush);
	

}


void CMy0414实验24View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	

	CView::OnLButtonDown(nFlags, point);
}
