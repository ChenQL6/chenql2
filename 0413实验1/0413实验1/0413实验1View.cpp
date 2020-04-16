
// 0413实验1View.cpp : CMy0413实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0413实验1.h"
#endif

#include "0413实验1Doc.h"
#include "0413实验1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0413实验1View

IMPLEMENT_DYNCREATE(CMy0413实验1View, CView)

BEGIN_MESSAGE_MAP(CMy0413实验1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()

// CMy0413实验1View 构造/析构

CMy0413实验1View::CMy0413实验1View()
{
	// TODO: 在此处添加构造代码

}

CMy0413实验1View::~CMy0413实验1View()
{
}

BOOL CMy0413实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0413实验1View 绘制

void CMy0413实验1View::OnDraw(CDC* pDC)
{
	CMy0413实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	cr.left = x - 60;
	cr.top = y - 100;
	cr.right = x + 300;
	cr.bottom = y + 100;

	pDC->Rectangle(cr);
}


// CMy0413实验1View 打印

BOOL CMy0413实验1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy0413实验1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy0413实验1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy0413实验1View 诊断

#ifdef _DEBUG
void CMy0413实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413实验1Doc* CMy0413实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413实验1Doc)));
	return (CMy0413实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413实验1View 消息处理程序


void CMy0413实验1View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	ReleaseCapture();
	flag = 0;
	x1 = point.x;
	y1 = point.y;
	x = x1;
	y = y1;

	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void CMy0413实验1View::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	SetCapture();
	x = point.x;
	y = point.y;
	flag += 1;

	CView::OnLButtonUp(nFlags, point);
}
