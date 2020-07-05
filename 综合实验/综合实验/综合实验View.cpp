
// 综合实验View.cpp : C综合实验View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "综合实验.h"
#endif

#include "综合实验Set.h"
#include "综合实验Doc.h"
#include "综合实验View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验View

IMPLEMENT_DYNCREATE(C综合实验View, CRecordView)

BEGIN_MESSAGE_MAP(C综合实验View, CRecordView)
END_MESSAGE_MAP()

// C综合实验View 构造/析构

C综合实验View::C综合实验View()
	: CRecordView(IDD_MY_FORM)
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C综合实验View::~C综合实验View()
{
}

void C综合实验View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
}

BOOL C综合实验View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C综合实验View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_综合实验Set;
	CRecordView::OnInitialUpdate();

}


// C综合实验View 诊断

#ifdef _DEBUG
void C综合实验View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C综合实验View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C综合实验Doc* C综合实验View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C综合实验Doc)));
	return (C综合实验Doc*)m_pDocument;
}
#endif //_DEBUG


// C综合实验View 数据库支持
CRecordset* C综合实验View::OnGetRecordset()
{
	return m_pSet;
}



// C综合实验View 消息处理程序
