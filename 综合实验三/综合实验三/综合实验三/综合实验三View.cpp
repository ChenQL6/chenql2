
// 综合实验三View.cpp : C综合实验三View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "综合实验三.h"
#endif

#include "综合实验三Set.h"
#include "综合实验三Doc.h"
#include "综合实验三View.h"
#include"Dialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验三View

IMPLEMENT_DYNCREATE(C综合实验三View, CRecordView)

BEGIN_MESSAGE_MAP(C综合实验三View, CRecordView)
	
	ON_BN_CLICKED(IDC_BUTTON3, &C综合实验三View::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON1, &C综合实验三View::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &C综合实验三View::OnBnClickedButton2)
END_MESSAGE_MAP()

// C综合实验三View 构造/析构

C综合实验三View::C综合实验三View()
	: CRecordView(IDD_MY_FORM)
	, num(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C综合实验三View::~C综合实验三View()
{
}

void C综合实验三View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL C综合实验三View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C综合实验三View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_综合实验三Set;
	CRecordView::OnInitialUpdate();

}


// C综合实验三View 诊断

#ifdef _DEBUG
void C综合实验三View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C综合实验三View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C综合实验三Doc* C综合实验三View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C综合实验三Doc)));
	return (C综合实验三Doc*)m_pDocument;
}
#endif //_DEBUG


// C综合实验三View 数据库支持
CRecordset* C综合实验三View::OnGetRecordset()
{
	return m_pSet;
}



// C综合实验三View 消息处理程序





void C综合实验三View::OnBnClickedButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	CRecordsetStatus status;
	m_pSet->GetStatus(status);
	m_pSet->Delete();
	if (status.m_lCurrentRecord == 0)
		m_pSet->MoveNext();
	else
	{
		m_pSet->MoveFirst();
	}
	UpdateData(false);
}


void C综合实验三View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	Dialog dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
	m_pSet->AddNew();
	m_pSet->SetFieldNull(&(m_pSet->column1),false);
	UpdateData(true);
	m_pSet->column1 =dlg.stu;
	m_pSet->Update();
	m_pSet->Requery();
	}
	
	
	
}


void C综合实验三View::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	Dialog dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		m_pSet->Edit();
		UpdateData(true);
		m_pSet->column1 = dlg.stu;
		m_pSet->Update();
		m_pSet->Requery();
	}
	

}
