
// 综合实验二View.cpp : C综合实验二View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "综合实验二.h"
#endif

#include "综合实验二Set.h"
#include "综合实验二Doc.h"
#include "综合实验二View.h"
#include"Dialog1.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验二View

IMPLEMENT_DYNCREATE(C综合实验二View, CRecordView)

BEGIN_MESSAGE_MAP(C综合实验二View, CRecordView)
	ON_WM_PAINT()
	ON_COMMAND(ID_RECORD_FIRST, &C综合实验二View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C综合实验二View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C综合实验二View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C综合实验二View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &C综合实验二View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C综合实验二View 构造/析构

C综合实验二View::C综合实验二View()
	: CRecordView(IDD_MY_FORM)
	
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码
	path = _T("C:\\综合实验\\");
	

}

C综合实验二View::~C综合实验二View()
{
}

void C综合实验二View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, m_pSet->column1);
}

BOOL C综合实验二View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C综合实验二View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_综合实验二Set;
	CRecordView::OnInitialUpdate();
	

}


// C综合实验二View 诊断

#ifdef _DEBUG
void C综合实验二View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C综合实验二View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C综合实验二Doc* C综合实验二View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C综合实验二Doc)));
	return (C综合实验二Doc*)m_pDocument;
}
#endif //_DEBUG


// C综合实验二View 数据库支持
CRecordset* C综合实验二View::OnGetRecordset()
{
	return m_pSet;
}



// C综合实验二View 消息处理程序


void C综合实验二View::foo(CImage& image, int& x, int& y, int& wh, int& hh)
{
	CRect rc;
	GetDlgItem(IDC_STATICp)->GetClientRect(&rc);

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


void C综合实验二View::OnPaint()
{
	CPaintDC dc(this);
	// device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
		   
	CImage im;
	CString s;
	GetDlgItemText(IDC_EDIT1, s);
	CString file;
	file = path + s;
	im.Load(file);
	if (!im.IsNull())
	{
		int x, y, wh, hh;
		foo(im, x, y, wh, hh);
		CDC *pDC = GetDlgItem(IDC_STATICp)->GetDC();
		pDC->SetStretchBltMode(HALFTONE);
		im.Draw(pDC->m_hDC, x, y, wh, hh);
	}
	else
	{
		MessageBox(_T("Load Error"));
	}
}


void C综合实验二View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate(true);
}


void C综合实验二View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())m_pSet->MoveFirst();
	UpdateData(false);
	Invalidate(true);
}


void C综合实验二View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())m_pSet->MoveLast();
	UpdateData(false);
	Invalidate(true);
}


void C综合实验二View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	Invalidate(true);

}


void C综合实验二View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代
	Dialog1 *dlg=new Dialog1;
	
	dlg->Create(IDD_DIALOG1,this);
	
	CRect rc;
	GetDlgItem(IDC_STATICp)->GetClientRect(&rc);
	InvalidateRect(rc,false);
	dlg->ShowWindow(1);
	
}
