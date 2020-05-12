
// 0323实验2View.cpp : CMy0323实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0323实验2.h"
#endif

#include "0323实验2Doc.h"
#include "0323实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0323实验2View

IMPLEMENT_DYNCREATE(CMy0323实验2View, CView)

BEGIN_MESSAGE_MAP(CMy0323实验2View, CView)
END_MESSAGE_MAP()

// CMy0323实验2View 构造/析构

CMy0323实验2View::CMy0323实验2View()
{
	// TODO: 在此处添加构造代码

}

CMy0323实验2View::~CMy0323实验2View()
{
}

BOOL CMy0323实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0323实验2View 绘制

void CMy0323实验2View::OnDraw(CDC* pDC)
{
	CMy0323实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	int r ;
	CRect cr;
	this->GetClientRect(&cr);
	pDoc->a.x = (cr.left + cr.right) / 2;
	pDoc->a.y = (cr.top + cr.bottom) / 2;
	if (cr.bottom - cr.top>cr.right - cr.left)
		r = (cr.right - cr.left) / 2;
	else
		r = (cr.bottom + cr.top) / 2;
	for (int i = 1; i <= 10; i++)
	{
		CPen newpen(PS_SOLID, 3, RGB(200, 150, 100));
		CPen *oldpen = pDC->SelectObject(&newpen);

		pDC->Ellipse((cr.right - cr.left) / 2 - r, (cr.bottom - cr.top) / 2 - r, (cr.right - cr.left) / 2 + r, (cr.bottom - cr.top) / 2 + r);
		r -= 5;
		pDC->SelectObject(oldpen);
	}

}


// CMy0323实验2View 诊断

#ifdef _DEBUG
void CMy0323实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0323实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0323实验2Doc* CMy0323实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0323实验2Doc)));
	return (CMy0323实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0323实验2View 消息处理程序
