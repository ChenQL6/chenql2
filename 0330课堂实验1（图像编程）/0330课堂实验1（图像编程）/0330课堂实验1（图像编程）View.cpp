
// 0330课堂实验1（图像编程）View.cpp : CMy0330课堂实验1（图像编程）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0330课堂实验1（图像编程）.h"
#endif

#include "0330课堂实验1（图像编程）Doc.h"
#include "0330课堂实验1（图像编程）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330课堂实验1（图像编程）View

IMPLEMENT_DYNCREATE(CMy0330课堂实验1（图像编程）View, CView)

BEGIN_MESSAGE_MAP(CMy0330课堂实验1（图像编程）View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330课堂实验1（图像编程）View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330课堂实验1（图像编程）View 构造/析构

CMy0330课堂实验1（图像编程）View::CMy0330课堂实验1（图像编程）View()
{
	// TODO: 在此处添加构造代码

}

CMy0330课堂实验1（图像编程）View::~CMy0330课堂实验1（图像编程）View()
{
}

BOOL CMy0330课堂实验1（图像编程）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0330课堂实验1（图像编程）View 绘制

void CMy0330课堂实验1（图像编程）View::OnDraw(CDC* /*pDC*/)
{
	CMy0330课堂实验1（图像编程）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0330课堂实验1（图像编程）View 打印

BOOL CMy0330课堂实验1（图像编程）View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy0330课堂实验1（图像编程）View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy0330课堂实验1（图像编程）View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy0330课堂实验1（图像编程）View 诊断

#ifdef _DEBUG
void CMy0330课堂实验1（图像编程）View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330课堂实验1（图像编程）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330课堂实验1（图像编程）Doc* CMy0330课堂实验1（图像编程）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330课堂实验1（图像编程）Doc)));
	return (CMy0330课堂实验1（图像编程）Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330课堂实验1（图像编程）View 消息处理程序


void CMy0330课堂实验1（图像编程）View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CClientDC dc(this);
	CFileDialog cfd(true);//true为打开，false为另存为
	int r = cfd.DoModal();  //弹出对话框
	if (r == IDOK) 
	{
		CString filename = cfd.GetPathName();
		CImage img;
		img.Load(filename);
		{
			CRect cr;
			this->GetClientRect(&cr);
			a.x = (cr.right - cr.left) / 2;
			a.y = (cr.bottom - cr.top) / 2;
		}
		img.Draw(dc.m_hDC, a.x-img.GetWidth()/2, a.y - img.GetWidth() / 2, img.GetWidth(), img.GetHeight());
		//dc.TextOutW(300, 300, filename);
	}
}
