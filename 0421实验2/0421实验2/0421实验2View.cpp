
// 0421实验2View.cpp : CMy0421实验2View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0421实验2.h"
#endif

#include "0421实验2Doc.h"
#include "0421实验2View.h"
#include "MyDlg.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0421实验2View

IMPLEMENT_DYNCREATE(CMy0421实验2View, CView)

BEGIN_MESSAGE_MAP(CMy0421实验2View, CView)
	ON_COMMAND(ID_POPOUT, &CMy0421实验2View::OnPopout)
END_MESSAGE_MAP()

// CMy0421实验2View 构造/析构

CMy0421实验2View::CMy0421实验2View()
{
	// TODO: 在此处添加构造代码

}

CMy0421实验2View::~CMy0421实验2View()
{
}

BOOL CMy0421实验2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0421实验2View 绘制

void CMy0421实验2View::OnDraw(CDC* /*pDC*/)
{
	CMy0421实验2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0421实验2View 诊断

#ifdef _DEBUG
void CMy0421实验2View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0421实验2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0421实验2Doc* CMy0421实验2View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0421实验2Doc)));
	return (CMy0421实验2Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0421实验2View 消息处理程序

void CMy0421实验2View::OnPopout()
{
	// TODO: 在此添加命令处理程序代码
	MyDlg cfd;
	int r = cfd.DoModal();
	if (r == IDOK)
	{

	}

}
