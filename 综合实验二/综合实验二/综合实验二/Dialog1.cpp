// Dialog1.cpp : 实现文件
//

#include "stdafx.h"
#include "综合实验二.h"
#include "Dialog1.h"
#include "afxdialogex.h"


// Dialog1 对话框

IMPLEMENT_DYNAMIC(Dialog1, CDialogEx)

Dialog1::Dialog1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	
	
{
	
}

Dialog1::~Dialog1()
{
}

void Dialog1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Dialog1, CDialogEx)
	ON_WM_PAINT()
	ON_WM_PAINT()
END_MESSAGE_MAP()


// Dialog1 消息处理程序




void Dialog1::foo(CImage& image, int& x, int& y, int& wh, int& hh)
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





void Dialog1::OnPaint()
{
	 // device context for painting
					   // TODO: 在此处添加消息处理程序代码
		   // 不为绘图消息调用 CDialogEx::OnPaint()
	CPaintDC dc(this);		   // 不为绘图消息调用 CRecordView::OnPaint()
	CImage im;
	CString s;
	
	GetDlgItemText(IDC_EDIT1, s);
	CString file=_T("C:\\综合实验\\QQ图片20200415090030.jpg");
	//file.Append(s);
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


