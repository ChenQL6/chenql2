
// 0330课堂实验2View.cpp : CMy0330课堂实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0330课堂实验2.h"
#endif

#include "0330课堂实验2Doc.h"
#include "0330课堂实验2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0330课堂实验2View

IMPLEMENT_DYNCREATE(CMy0330课堂实验2View, CView)

BEGIN_MESSAGE_MAP(CMy0330课堂实验2View, CView)
	ON_COMMAND(ID_FILE_OPEN, &CMy0330课堂实验2View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0330课堂实验2View 构造/析构

CMy0330课堂实验2View::CMy0330课堂实验2View()
{
	// TODO: 在此处添加构造代码

}

CMy0330课堂实验2View::~CMy0330课堂实验2View()
{
}

BOOL CMy0330课堂实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0330课堂实验2View 绘制

void CMy0330课堂实验2View::OnDraw(CDC* pDC)
{
	CMy0330课堂实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	this->GetClientRect(&cr);
	a.x = (cr.right - cr.left) / 2;
	a.y = (cr.bottom - cr.top) / 2;
	if (flag == 1)
	{
		img.Draw(pDC->m_hDC, a.x - img.GetWidth() / 2, a.y - img.GetWidth() / 2, img.GetWidth(), img.GetHeight());
	}
}

// CMy0330课堂实验2View 诊断

#ifdef _DEBUG
void CMy0330课堂实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0330课堂实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0330课堂实验2Doc* CMy0330课堂实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0330课堂实验2Doc)));
	return (CMy0330课堂实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0330课堂实验2View 消息处理程序


void CMy0330课堂实验2View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);//true为打开，false为另存为
	int r = cfd.DoModal();  //弹出对话框
	if (r == IDOK)
	{
		filename = cfd.GetPathName(); Invalidate();
		img.Load(filename);
		flag = 1;
	}
}
