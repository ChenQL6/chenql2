
// MFC添加菜单资源，显示名字View.cpp : CMFC添加菜单资源，显示名字View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "MFC添加菜单资源，显示名字.h"
#endif

#include "MFC添加菜单资源，显示名字Doc.h"
#include "MFC添加菜单资源，显示名字View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC添加菜单资源，显示名字View

IMPLEMENT_DYNCREATE(CMFC添加菜单资源，显示名字View, CView)

BEGIN_MESSAGE_MAP(CMFC添加菜单资源，显示名字View, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_SHOWNAME, &CMFC添加菜单资源，显示名字View::OnShowname)
END_MESSAGE_MAP()

// CMFC添加菜单资源，显示名字View 构造/析构

CMFC添加菜单资源，显示名字View::CMFC添加菜单资源，显示名字View()
{
	// TODO: 在此处添加构造代码

}

CMFC添加菜单资源，显示名字View::~CMFC添加菜单资源，显示名字View()
{
}

BOOL CMFC添加菜单资源，显示名字View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CMFC添加菜单资源，显示名字View 绘制

void CMFC添加菜单资源，显示名字View::OnDraw(CDC* /*pDC*/)
{
	CMFC添加菜单资源，显示名字Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CMFC添加菜单资源，显示名字View 打印

BOOL CMFC添加菜单资源，显示名字View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CMFC添加菜单资源，显示名字View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CMFC添加菜单资源，显示名字View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CMFC添加菜单资源，显示名字View 诊断

#ifdef _DEBUG
void CMFC添加菜单资源，显示名字View::AssertValid() const
{
	CView::AssertValid();
}

void CMFC添加菜单资源，显示名字View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC添加菜单资源，显示名字Doc* CMFC添加菜单资源，显示名字View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC添加菜单资源，显示名字Doc)));
	return (CMFC添加菜单资源，显示名字Doc*)m_pDocument;
}
#endif //_DEBUG


// CMFC添加菜单资源，显示名字View 消息处理程序


void CMFC添加菜单资源，显示名字View::OnShowname()
{
	// TODO: 在此添加命令处理程序代码
	CString s = _T("陈秋琳");
	CClientDC dc(this);
	dc.TextOutW(200, 300, s);
}
