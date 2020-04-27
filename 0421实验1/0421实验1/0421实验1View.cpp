
// 0421实验1View.cpp : CMy0421实验1View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "0421实验1.h"
#endif

#include "0421实验1Doc.h"
#include "0421实验1View.h"

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMy0421实验1View

IMPLEMENT_DYNCREATE(CMy0421实验1View, CView)

BEGIN_MESSAGE_MAP(CMy0421实验1View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_FILE_OPEN, &CMy0421实验1View::OnFileOpen)
END_MESSAGE_MAP()

// CMy0421实验1View 构造/析构

CMy0421实验1View::CMy0421实验1View()
{
	// TODO: 在此处添加构造代码

}

CMy0421实验1View::~CMy0421实验1View()
{
}

BOOL CMy0421实验1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMy0421实验1View 绘制

void CMy0421实验1View::OnDraw(CDC* /*pDC*/)
{
	CMy0421实验1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMy0421实验1View 打印

BOOL CMy0421实验1View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMy0421实验1View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMy0421实验1View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMy0421实验1View 诊断

#ifdef _DEBUG
void CMy0421实验1View::AssertValid() const
{
	CView::AssertValid();
}

void CMy0421实验1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMy0421实验1Doc* CMy0421实验1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMy0421实验1Doc)));
	return (CMy0421实验1Doc*)m_pDocument;
}
#endif //_DEBUG


// CMy0421实验1View 消息处理程序


void CMy0421实验1View::OnFileOpen()
{
	// TODO: 在此添加命令处理程序代码
	CFileDialog cfd(true);
	int r = cfd.DoModal();
	if (r == IDOK)
	{
		CString filename = cfd.GetPathName();
		ofstream ofs(_T("D:\\abc.txt"));
		ofs << CT2A(filename.GetString());
	}
}
