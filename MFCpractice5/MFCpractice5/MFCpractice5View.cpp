
// MFCpractice5View.cpp : CMFCpractice5View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFCpractice5.h"
#endif

#include "MFCpractice5Doc.h"
#include "MFCpractice5View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCpractice5View

IMPLEMENT_DYNCREATE(CMFCpractice5View, CView)

BEGIN_MESSAGE_MAP(CMFCpractice5View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CMFCpractice5View 构造/析构

CMFCpractice5View::CMFCpractice5View()
{
	// TODO: 在此处添加构造代码

}

CMFCpractice5View::~CMFCpractice5View()
{
}

BOOL CMFCpractice5View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFCpractice5View 绘制

void CMFCpractice5View::OnDraw(CDC* pDC)
{
	CMFCpractice5Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	//CRect A(30, 30, 100, 100);
	pDC->Rectangle(pDoc->A);


	//CRect B(200, 200, 270, 270);
	pDC->Rectangle(pDoc->B);

	//CRect C(400, 400, 500, 500);
	pDC->Rectangle(pDoc->C);

	
}


// CMFCpractice5View 打印

BOOL CMFCpractice5View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFCpractice5View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFCpractice5View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFCpractice5View 诊断

#ifdef _DEBUG
void CMFCpractice5View::AssertValid() const
{
	CView::AssertValid();
}

void CMFCpractice5View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFCpractice5Doc* CMFCpractice5View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFCpractice5Doc)));
	return (CMFCpractice5Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFCpractice5View 消息处理程序


void CMFCpractice5View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCpractice5Doc *pDoc = GetDocument();
	CString s;
	CClientDC dc(this);

	if (pDoc->A.PtInRect(point))
	{
		pDoc->a = rand() % 150 + 5;
		s.Format(_T("a=%d"), pDoc->a);
		dc.TextOutW(point.x, point.y, s);
		//dc.TextOutW(200, 200, s);
	}
	else
	{
		if (pDoc->B.PtInRect(point))
		{
			pDoc->b = rand() % 150 + 5;
			s.Format(_T(" b=%d"), pDoc->b) ;
			dc.TextOutW(point.x, point.y, s);
		}
		else
		{
			s.Format(_T("点击无效"));
			dc.TextOutW(point.x, point.y, s);
		}
	}

	CView::OnLButtonDown(nFlags, point);
}


void CMFCpractice5View::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CMFCpractice5Doc *pDoc = GetDocument();

	CClientDC dc(this);
	CString s;
	if (pDoc->C.PtInRect(point))
	{
		s.Format(_T("a+b=%d"), pDoc->a+ pDoc->b);
		dc.TextOutW(point.x, point.y, s);
	}
	else
	{
			s.Format(_T("点击无效"));
			dc.TextOutW(point.x, point.y, s);
	}

	CView::OnRButtonDown(nFlags, point);
}
