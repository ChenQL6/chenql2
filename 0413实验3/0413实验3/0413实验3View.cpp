
// 0413实验3View.cpp : CMy0413实验3View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0413实验3.h"
#endif

#include "0413实验3Doc.h"
#include "0413实验3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0413实验3View

IMPLEMENT_DYNCREATE(CMy0413实验3View, CView)

BEGIN_MESSAGE_MAP(CMy0413实验3View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMy0413实验3View 构造/析构

CMy0413实验3View::CMy0413实验3View()
{
	// TODO: 在此处添加构造代码

}

CMy0413实验3View::~CMy0413实验3View()
{
}

BOOL CMy0413实验3View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0413实验3View 绘制

void CMy0413实验3View::OnDraw(CDC* /*pDC*/)
{
	CMy0413实验3Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0413实验3View 打印

BOOL CMy0413实验3View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy0413实验3View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy0413实验3View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy0413实验3View 诊断

#ifdef _DEBUG
void CMy0413实验3View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0413实验3View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0413实验3Doc* CMy0413实验3View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0413实验3Doc)));
	return (CMy0413实验3Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0413实验3View 消息处理程序
