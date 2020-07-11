
// 综合实验一View.cpp : C综合实验一View 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "综合实验一.h"
#endif

#include "综合实验一Set.h"
#include "综合实验一Doc.h"
#include "综合实验一View.h"
#include "MyDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// C综合实验一View

IMPLEMENT_DYNCREATE(C综合实验一View, CRecordView)

BEGIN_MESSAGE_MAP(C综合实验一View, CRecordView)
	ON_WM_PAINT()
	ON_EN_CHANGE(IDC_EDIT1, &C综合实验一View::OnEnChangeEdit1)
	ON_COMMAND(ID_RECORD_FIRST, &C综合实验一View::OnRecordFirst)
	ON_COMMAND(ID_RECORD_PREV, &C综合实验一View::OnRecordPrev)
	ON_COMMAND(ID_RECORD_NEXT, &C综合实验一View::OnRecordNext)
	ON_COMMAND(ID_RECORD_LAST, &C综合实验一View::OnRecordLast)
	ON_BN_CLICKED(IDC_BUTTON1, &C综合实验一View::OnBnClickedButton1)
END_MESSAGE_MAP()

// C综合实验一View 构造/析构

C综合实验一View::C综合实验一View()
	: CRecordView(IDD_MY_FORM)
	, Name(_T(""))
	, major(_T(""))
	, gender(_T(""))
	, phone(_T(""))
	, address(_T(""))
	, ID(0)
	, Sno(_T(""))
	, year(_T(""))
{
	m_pSet = NULL;
	// TODO: 在此处添加构造代码

}

C综合实验一View::~C综合实验一View()
{
}

void C综合实验一View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// 可以在此处插入 DDX_Field* 函数以将控件“连接”到数据库字段，例如
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// 有关详细信息，请参阅 MSDN 和 ODBC 示例
	DDX_Text(pDX, IDC_EDIT1, ID);
	DDX_Text(pDX, IDC_EDIT2, Name);
	DDX_Text(pDX, IDC_EDIT4, major);
	DDX_Text(pDX, IDC_EDIT5, gender);
	DDX_Text(pDX, IDC_EDIT7, phone);
	DDX_Text(pDX, IDC_EDIT8, address);
	DDX_Text(pDX, IDC_EDIT1, ID);
	DDX_Text(pDX, IDC_EDIT3, Sno);
	DDX_Text(pDX, IDC_EDIT6, year);
}

BOOL C综合实验一View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CRecordView::PreCreateWindow(cs);
}

void C综合实验一View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_综合实验一Set;
	CRecordView::OnInitialUpdate();

}


// C综合实验一View 诊断

#ifdef _DEBUG
void C综合实验一View::AssertValid() const
{
	CRecordView::AssertValid();
}

void C综合实验一View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

C综合实验一Doc* C综合实验一View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(C综合实验一Doc)));
	return (C综合实验一Doc*)m_pDocument;
}
#endif //_DEBUG


// C综合实验一View 数据库支持
CRecordset* C综合实验一View::OnGetRecordset()
{
	return m_pSet;
}



// C综合实验一View 消息处理程序


void C综合实验一View::OnPaint()
{
	CPaintDC dc(this); // device context for painting
					   // TODO: 在此处添加消息处理程序代码
					   // 不为绘图消息调用 CRecordView::OnPaint()
	GetDlgItem(IDC_STATIC1)->GetClientRect(&pic_rect);//取得图片控件区域
	CString filename;
	m_pSet->GetFieldValue(short(8), filename);//从记录集当前记录，读取第8个字段值即相片路径，放入filename
	CImage img;
	img.Load(filename);
	if (!img.IsNull())
	{
		int sx, sy, w, h;
		foo(img, sx, sy, w, h);
		CDC *pDC = GetDlgItem(IDC_STATIC1)->GetDC();//IDC_STATIC1为图片控件的ID
		pDC->SetStretchBltMode(HALFTONE);      //图像不失真
		img.Draw(pDC->m_hDC, sx, sy, w, h);
		ReleaseDC(pDC);
	}
	else
	{
		MessageBox(_T("Load Error"));
	}
}

void C综合实验一View::foo(CImage &img, int &sx, int &sy, int &w, int &h)
{
	CRect rect;
	GetDlgItem(IDC_STATIC1)->GetClientRect(&rect);            //取得客户区,IDC_STATIC1为图片控件的ID
	float rect_ratio = 1.0*rect.Width() / rect.Height();     //计算客户区的宽高比
	float img_ratio = 1.0*img.GetWidth() / img.GetHeight();   //计算图片的宽高比
	if (rect_ratio > img_ratio)                             //如果客户区宽高比更大（同样高度时图片控件更宽）
	{
		h = rect.Height();                                 //以客户区高度为高度
		w = img_ratio*h;                                   //按比例缩放图片的宽度
		sx = (rect.Width() - w) / 2;                      //左上角坐标计算
		sy = 0;                                          //相对于客户区来讲   y=0
	}
	else
	{
		w = rect.Width();                             //以客户区宽度为宽度
		h = w / img_ratio;                             //按比例缩放图片的高度
		sx = 0;                                     //相对于客户区来讲   x=0
		sy = (rect.Height() - h) / 2;                //左上角坐标计算
	}

}




void C综合实验一View::OnEnChangeEdit1()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CRecordView::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}


void C综合实验一View::OnRecordFirst()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveFirst();
	UpdateData(false);
	InvalidateRect(&pic_rect, true);
}


void C综合实验一View::OnRecordPrev()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MovePrev();
	if (m_pSet->IsBOF())
		m_pSet->MoveFirst();
	UpdateData(false);
	InvalidateRect(&pic_rect, true);
}


void C综合实验一View::OnRecordNext()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveNext();
	if (m_pSet->IsEOF())
		m_pSet->MoveLast();
	UpdateData(false);
	InvalidateRect(&pic_rect, true);
}


void C综合实验一View::OnRecordLast()
{
	// TODO: 在此添加命令处理程序代码
	m_pSet->MoveLast();
	UpdateData(false);
	InvalidateRect(&pic_rect, true);
}


void C综合实验一View::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	CString filename;
	//filename = "C:\\Users\\MI\\Pictures\\001刘一.jpg";
	m_pSet->GetFieldValue(short(8), filename);//从记录集当前记录，读取第8个字段值即相片路径，放入filename
	MyDlg *dlg = new MyDlg;
	dlg->Create(IDD_DIALOG1);
	dlg->getFilename(filename);
	dlg->ShowWindow(1);
}
