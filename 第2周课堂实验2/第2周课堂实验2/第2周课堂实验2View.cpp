
// 第2周课堂实验2View.cpp : C第2周课堂实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "第2周课堂实验2.h"
#endif

#include "第2周课堂实验2Doc.h"
#include "第2周课堂实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C第2周课堂实验2View

IMPLEMENT_DYNCREATE(C第2周课堂实验2View, CView)

BEGIN_MESSAGE_MAP(C第2周课堂实验2View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// C第2周课堂实验2View 构造/析构

C第2周课堂实验2View::C第2周课堂实验2View()
{
	// TODO: 在此处添加构造代码

}

C第2周课堂实验2View::~C第2周课堂实验2View()
{
}

BOOL C第2周课堂实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C第2周课堂实验2View 绘制

void C第2周课堂实验2View::OnDraw(CDC* pDC)
{
	C第2周课堂实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CClientDC dc(this);
	dc.Ellipse(pDoc->cr);
}


// C第2周课堂实验2View 打印

BOOL C第2周课堂实验2View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C第2周课堂实验2View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C第2周课堂实验2View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C第2周课堂实验2View 诊断

#ifdef _DEBUG
void C第2周课堂实验2View::AssertValid() const
{
	CView::AssertValid();
}

void C第2周课堂实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C第2周课堂实验2Doc* C第2周课堂实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C第2周课堂实验2Doc)));
	return (C第2周课堂实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// C第2周课堂实验2View 消息处理程序


void C第2周课堂实验2View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C第2周课堂实验2Doc* pDoc = GetDocument();
	int r = rand() % 60 + 20;
	pDoc->cr.left = point.x - r;
	pDoc->cr.top = point.y - r;
	pDoc->cr.right = point.x + r;
	pDoc->cr.bottom = point.y + r;

	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}
