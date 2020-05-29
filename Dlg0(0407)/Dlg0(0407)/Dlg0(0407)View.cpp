
// Dlg0(0407)View.cpp : CDlg00407View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg0(0407).h"
#endif

#include "Dlg0(0407)Doc.h"
#include "Dlg0(0407)View.h"
#include "MyDlg0.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg00407View

IMPLEMENT_DYNCREATE(CDlg00407View, CView)

BEGIN_MESSAGE_MAP(CDlg00407View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CDlg00407View::OnPopout)
	ON_WM_LBUTTONDBLCLK()

END_MESSAGE_MAP()

// CDlg00407View 构造/析构

CDlg00407View::CDlg00407View()
{
	// TODO: 在此处添加构造代码
	show_hide = 1;
	pD=NULL;

}

CDlg00407View::~CDlg00407View()
{
}

BOOL CDlg00407View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg00407View 绘制

void CDlg00407View::OnDraw(CDC* /*pDC*/)
{
	CDlg00407Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg00407View 打印

BOOL CDlg00407View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CDlg00407View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CDlg00407View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CDlg00407View 诊断

#ifdef _DEBUG
void CDlg00407View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg00407View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg00407Doc* CDlg00407View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg00407Doc)));
	return (CDlg00407Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg00407View 消息处理程序


void CDlg00407View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	MyDlg0 dlg;
	int r = dlg.DoModal();
	if (r == IDOK)
	{
		s = "你已退出对话框";

	}
	
	dc.TextOutW(200, 200, s);
}


void CDlg00407View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值


	CView::OnLButtonDblClk(nFlags, point);
}

/*
void CDlg00407View::OnShowHide()
{
	// TODO: 在此添加命令处理程序代码
	if (show_hide == 1)
		show_hide = 0;
	else
		pD->ShowHide(show_hide);

}*/
