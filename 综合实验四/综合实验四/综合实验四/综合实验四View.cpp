
// 综合实验四View.cpp : C综合实验四View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "综合实验四.h"
#endif

#include "综合实验四Set.h"
#include "综合实验四Doc.h"
#include "综合实验四View.h"
#include"Dial.h"
#include"Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验四View

IMPLEMENT_DYNCREATE(C综合实验四View, CRecordView)

BEGIN_MESSAGE_MAP(C综合实验四View, CRecordView)
	ON_COMMAND(ID_RECORD_FIRST, &C综合实验四View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C综合实验四View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C综合实验四View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C综合实验四View::OnRecordLast)
	ON_COMMAND(ID_32771, &C综合实验四View::On32771)
	ON_COMMAND(ID_32772, &C综合实验四View::On32772)
	ON_COMMAND(ID_32773, &C综合实验四View::On32773)
	ON_COMMAND(ID_32774, &C综合实验四View::On32774)
END_MESSAGE_MAP()

// C综合实验四View 构造/析构

C综合实验四View::C综合实验四View()
	: CRecordView(IDD_MY_FORM)
	, ID(_T(""))
	, name(_T(""))
	, age(_T(""))
	, num(_T(""))
	, phone(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C综合实验四View::~C综合实验四View()
{
}

void C综合实验四View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->column1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->column2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->column3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->column4);
}

BOOL C综合实验四View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C综合实验四View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_综合实验四Set;
	CRecordView::OnInitialUpdate();

}


// C综合实验四View 诊断

#ifdef _DEBUG
void C综合实验四View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C综合实验四View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C综合实验四Doc* C综合实验四View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C综合实验四Doc)));
	return (C综合实验四Doc*)m_pDocument;
}
#endif //_DEBUG


// C综合实验四View 数据库支持
CRecordset* C综合实验四View::OnGetRecordset()
{
	return m_pSet;
}



// C综合实验四View 消息处理程序


void C综合实验四View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate(true);
}


void C综合实验四View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate(true);

}


void C综合实验四View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())m_pSet->MoveLast();
	UpdateData(false);
	Invalidate(true);
}


void C综合实验四View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate(true);

}


void C综合实验四View::OnDraw(CDC* pDC)
{
	// TODO: 在此添加专用代码和/或调用基类
	CImage im;
	CString s;
	GetDlgItemText(IDC_EDIT1, s);
	CString file;
	file = m_pSet->column5;
	im.Load(file);
	if (!im.IsNull())
	{
		int x, y, wh, hh;
		foo(im, x, y, wh, hh);
		CDC *pDC = GetDlgItem(IDC_STATIC1)->GetDC();
		pDC->SetStretchBltMode(HALFTONE);
		im.Draw(pDC->m_hDC, x, y, wh, hh);
	}
	else
	{
		MessageBox(_T("Load Error"));
	}
}


void C综合实验四View::foo(CImage& image, int& x, int& y, int& wh, int& hh)
{
	CRect rc;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rc);

	float img_rit = 1.0*image.GetWidth() / image.GetHeight();
	float clientrect_rit = 1.0*rc.Width() / rc.Height();
	if (clientrect_rit > img_rit)
	{
		hh = rc.Height();
		wh = hh*img_rit;
		x = (rc.Width() - wh) / 2;
		y = 0;

	}
	else
	{
		wh = rc.Width();
		hh = wh;
		x = 0;
		y = (rc.Height() - hh) / 2;


	}
}


void C综合实验四View::On32771()
{
	// TODO: 在此添加命令处理程序代码
	Dial dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		UpdateData(true);
		m_pSet->m_strFilter =dlg.s;
		m_pSet->Requery();
		
	
	}

}


void C综合实验四View::On32772()
{
	// TODO: 在此添加命令处理程序代码
	
	
	
	m_pSet->m_strFilter = "'%'";
	m_pSet->Requery();
	MessageBox(_T("请在主视图中查看所有记录"));
	
}


void C综合实验四View::On32773()
{
	// TODO: 在此添加命令处理程序代码
	Dial dlg;
	int r = dlg.DoModal();
	if (r == IDOK) {
		UpdateData(true);
		m_pSet->m_strSort = dlg.s;
		m_pSet->Requery();


	}

}


void C综合实验四View::On32774()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->Delete();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
}
