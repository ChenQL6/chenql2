
// 实验3.2（0317）View.cpp : C实验32（0317）View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "实验3.2（0317）.h"
#endif

#include "实验3.2（0317）Doc.h"
#include "实验3.2（0317）View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C实验32（0317）View

IMPLEMENT_DYNCREATE(C实验32（0317）View, CView)

BEGIN_MESSAGE_MAP(C实验32（0317）View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
	ON_WM_KEYDOWN()
END_MESSAGE_MAP()

// C实验32（0317）View 构造/析构

C实验32（0317）View::C实验32（0317）View()
{
	// TODO: 在此处添加构造代码

}

C实验32（0317）View::~C实验32（0317）View()
{
}

BOOL C实验32（0317）View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// C实验32（0317）View 绘制

void C实验32（0317）View::OnDraw(CDC* pDC)
{
	C实验32（0317）Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	pDC->Rectangle(pDoc->cr);
}


// C实验32（0317）View 打印

BOOL C实验32（0317）View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void C实验32（0317）View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void C实验32（0317）View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// C实验32（0317）View 诊断

#ifdef _DEBUG
void C实验32（0317）View::AssertValid() const
{
	CView::AssertValid();
}

void C实验32（0317）View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

C实验32（0317）Doc* C实验32（0317）View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C实验32（0317）Doc)));
	return (C实验32（0317）Doc*)m_pDocument;
}
#endif //_DEBUG


// C实验32（0317）View 消息处理程序


void C实验32（0317）View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	C实验32（0317）Doc* pDoc = GetDocument();
	pDoc->cr.left = 400;
	pDoc->cr.top = 300;
	pDoc->cr.right = 800;
	pDoc->cr.bottom = 500;
	Invalidate();

	CView::OnLButtonDown(nFlags, point);
}


void C实验32（0317）View::OnKeyDown(UINT nChar, UINT nRepCnt, UINT nFlags)
{
	// TODO: 在此添加消息处理程序代码和/或调用默认值
	CRect cc;
	CClientDC dc(this);
	this->GetClientRect(&cc);
	C实验32（0317）Doc* pDoc = GetDocument();
	switch(nChar)
	{ 
	case VK_LEFT:
		if (pDoc->cr.left > 0)
		{
			pDoc->cr.left -= 20;
			pDoc->cr.right -= 20;
		}
		break;
	case VK_RIGHT:
		if (pDoc->cr.right<=(cc.right-cc.left))
		{
			pDoc->cr.left += 20;
			pDoc->cr.right += 20;
		}
		break;
	case VK_UP:
		if (pDoc->cr.top > 0)
		{
			pDoc->cr.top -= 20;
			pDoc->cr.bottom -= 20;
		}
		break;
	case VK_DOWN:
		if (pDoc->cr.bottom <= (cc.bottom - cc.top))
		{
			pDoc->cr.top += 20;
			pDoc->cr.bottom += 20;
		}
		break;
	case VK_HOME:
		if (pDoc->cr.top > 0 && pDoc->cr.left > 0)
		{
			pDoc->cr.top -= 20;
			pDoc->cr.left -= 20;
		}
		break;
	case VK_END:
		if (pDoc->cr.bottom > pDoc->cr.top&&(pDoc->cr.right>pDoc->cr.left))
		{
			pDoc->cr.top += 20;
			pDoc->cr.left += 20;
		}
		break;
	}
	Invalidate();
	CView::OnKeyDown(nChar, nRepCnt, nFlags);
}
