
// 0331实验3.1View.cpp : CMy0331实验31View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0331实验3.1.h"
#endif

#include "0331实验3.1Doc.h"
#include "0331实验3.1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
CString s;


// CMy0331实验31View

IMPLEMENT_DYNCREATE(CMy0331实验31View, CView)

BEGIN_MESSAGE_MAP(CMy0331实验31View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_CHAR()
END_MESSAGE_MAP()

// CMy0331实验31View 构造/析构

CMy0331实验31View::CMy0331实验31View()
{
	// TODO: 在此处添加构造代码

}

CMy0331实验31View::~CMy0331实验31View()
{
}

BOOL CMy0331实验31View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0331实验31View 绘制

void CMy0331实验31View::OnDraw(CDC* pDC)
{
	CMy0331实验31Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	CRect cr(30, 30, 300, 300);
	pDC->Rectangle(&cr);
}


// CMy0331实验31View 打印

BOOL CMy0331实验31View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy0331实验31View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy0331实验31View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy0331实验31View 诊断

#ifdef _DEBUG
void CMy0331实验31View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0331实验31View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0331实验31Doc* CMy0331实验31View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0331实验31Doc)));
	return (CMy0331实验31Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0331实验31View 消息处理程序


void CMy0331实验31View::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CString ss;
	CClientDC dc(this);
	s += (char)nChar;
	dc.TextOutW(50, 80, s);


	CView::OnChar(nChar, nRepCnt, nFlags);
}
