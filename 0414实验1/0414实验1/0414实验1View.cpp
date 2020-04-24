
// 0414实验1View.cpp : CMy0414实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0414实验1.h"
#endif

#include "0414实验1Doc.h"
#include "0414实验1View.h"
#include "MyDlg.h"
#include "MyDlg2.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0414实验1View

IMPLEMENT_DYNCREATE(CMy0414实验1View, CView)

BEGIN_MESSAGE_MAP(CMy0414实验1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMy0414实验1View::OnFileOpen)
	ON_WM_LBUTTONDBLCLK()
	ON_COMMAND(ID_POPOUT, &CMy0414实验1View::OnPopout)
END_MESSAGE_MAP()

// CMy0414实验1View 构造/析构

CMy0414实验1View::CMy0414实验1View()
{
	// TODO: 在此处添加构造代码
	filename = "";
}

CMy0414实验1View::~CMy0414实验1View()
{
}

BOOL CMy0414实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0414实验1View 绘制

void CMy0414实验1View::OnDraw(CDC* /*pDC*/)
{
	CMy0414实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码

}


// CMy0414实验1View 打印

BOOL CMy0414实验1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy0414实验1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy0414实验1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy0414实验1View 诊断

#ifdef _DEBUG
void CMy0414实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0414实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0414实验1Doc* CMy0414实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0414实验1Doc)));
	return (CMy0414实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0414实验1View 消息处理程序


void CMy0414实验1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	CClientDC dc(this);
	if (r = IDOK)
	{
		CString filename = cfd.GetPathName();
		dc.TextOutW(200, 300, filename);
	}
}


void CMy0414实验1View::OnLButtonDblClk(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CFileDialog cfd(true); //创建文件窗口对象(cdf)
	int r = cfd.DoModal();//功能是显示窗口
	CClientDC dc(this);
	if (r = IDOK)
	{
		filename = cfd.GetPathName();
		dc.TextOutW(200, 300, filename);
	}
	CView::OnLButtonDblClk(nFlags, point);
}


void CMy0414实验1View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg dlg;
	dlg.s = filename;//把文件名赋给对话框对象(dlg)的编辑控件(   .s)
	UpdateData(false);//更新数据   后台送前台
	dlg.DoModal();//显示窗口
	CString s;
	s = filename;

}
