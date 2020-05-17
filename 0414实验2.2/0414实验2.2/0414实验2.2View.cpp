
// 0414实验2.2View.cpp : CMy0414实验22View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0414实验2.2.h"
#endif

#include "0414实验2.2Doc.h"
#include "0414实验2.2View.h"
#include "Dlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414实验22View

IMPLEMENT_DYNCREATE(CMy0414实验22View, CView)

BEGIN_MESSAGE_MAP(CMy0414实验22View, CView)
	ON_COMMAND(ID_POPOUT, &CMy0414实验22View::OnPopout)
END_MESSAGE_MAP()

// CMy0414实验22View 构造/析构

CMy0414实验22View::CMy0414实验22View()
{
	// TODO: 在此处添加构造代码
	cr.left = 0;
	cr.top = 0;
	cr.right = 0;
	cr.bottom = 0;

}

CMy0414实验22View::~CMy0414实验22View()
{
}

BOOL CMy0414实验22View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0414实验22View 绘制

void CMy0414实验22View::OnDraw(CDC* pDC)
{
	CMy0414实验22Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Ellipse(&cr);
}


// CMy0414实验22View 诊断

#ifdef _DEBUG
void CMy0414实验22View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414实验22View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414实验22Doc* CMy0414实验22View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414实验22Doc)));
	return (CMy0414实验22Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414实验22View 消息处理程序


void CMy0414实验22View::OnPopout()
 	// TODO: 在此添加命令处理程序代码
{
	Dlg1 dlg;
	int r = dlg.DoModal();
	if(r==IDOK)
	{
		UpdateData(true);
		cr.left = dlg.a;
		cr.top = dlg.b;
		cr.right = dlg.c;
		cr.bottom = dlg.d;
	
	}
	Invalidate();

}
