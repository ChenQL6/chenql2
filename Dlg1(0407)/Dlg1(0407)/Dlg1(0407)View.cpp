
// Dlg1(0407)View.cpp : CDlg10407View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Dlg1(0407).h"
#endif

#include "Dlg1(0407)Doc.h"
#include "Dlg1(0407)View.h"
#include"MyDlg1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDlg10407View

IMPLEMENT_DYNCREATE(CDlg10407View, CView)

BEGIN_MESSAGE_MAP(CDlg10407View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_POPOUT, &CDlg10407View::OnPopout)
END_MESSAGE_MAP()

// CDlg10407View 构造/析构

CDlg10407View::CDlg10407View()
{
	// TODO: 在此处添加构造代码

}

CDlg10407View::~CDlg10407View()
{
}

BOOL CDlg10407View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CDlg10407View 绘制

void CDlg10407View::OnDraw(CDC* /*pDC*/)
{
	CDlg10407Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CDlg10407View 打印

BOOL CDlg10407View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CDlg10407View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CDlg10407View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CDlg10407View 诊断

#ifdef _DEBUG
void CDlg10407View::AssertValid() const
{
	CView::AssertValid();
}

void CDlg10407View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDlg10407Doc* CDlg10407View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDlg10407Doc)));
	return (CDlg10407Doc*)m_pDocument;
}
#endif //_DEBUG


// CDlg10407View 消息处理程序


void CDlg10407View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg1 dlg;
	int t = dlg.DoModal();

	if (t == IDOK)
	{
		CString A, B, C;
		A = dlg.a;
		B = dlg.b;
		C = dlg.c;
	}
}
