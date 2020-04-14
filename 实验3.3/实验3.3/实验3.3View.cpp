
// 实验3.3View.cpp : C实验33View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验3.3.h"
#endif

#include "实验3.3Doc.h"
#include "实验3.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验33View

IMPLEMENT_DYNCREATE(C实验33View, CView)

BEGIN_MESSAGE_MAP(C实验33View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// C实验33View 构造/析构

C实验33View::C实验33View()
{
	// TODO: 在此处添加构造代码
	set = true;
	N = 5;
	for (int i = 0; i < N; i++)
	{
		int t = (i + 1) * 100;
		CRect rect(t, 0, t + 20, 20);
		cr.Add(rect);
	}
}

C实验33View::~C实验33View()
{
}

BOOL C实验33View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验33View 绘制

void C实验33View::OnDraw(CDC* pDC)
{
	C实验33Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

		SetTimer(1, 200, NULL);

	pDC->Ellipse(pDoc->cr);

	// TODO: 在此处为本机数据添加绘制代码
}

// C实验33View 打印

BOOL C实验33View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C实验33View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C实验33View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C实验33View 诊断

#ifdef _DEBUG
void C实验33View::AssertValid() const
{
	CView::AssertValid();
}

void C实验33View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验33Doc* C实验33View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验33Doc)));
	return (C实验33Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验33View 消息处理程序


void C实验33View::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C实验33Doc* pDoc = GetDocument();
	CRect A;
	GetClientRect(&A);  //获得客户区给A

	if (pDoc->cr.bottom < A.bottom)
	{
		pDoc->cr.top += 20;
		pDoc->cr.bottom += 20;
	}
	else while(pDoc->cr.top>0)
	{
		pDoc->cr.top -= 30;
		pDoc->cr.bottom -= 30;
	}
	/*int i = nIDEvent;
	cr[i].top += 10;
	cr[i].bottom += 10;
	Invalidate();*/

	Invalidate();

	CView::OnTimer(nIDEvent);
}
