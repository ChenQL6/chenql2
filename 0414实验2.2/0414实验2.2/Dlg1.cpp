// Dlg1.cpp : 实现文件
//

#include "stdafx.h"
#include "0414实验2.2.h"
#include "Dlg1.h"
#include "afxdialogex.h"


// Dlg1 对话框

IMPLEMENT_DYNAMIC(Dlg1, CDialogEx)

Dlg1::Dlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, a(0)
	, b(0)
	, c(0)
	, d(0)
{

}

Dlg1::~Dlg1()
{
}

void Dlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, a);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, c);
	DDX_Text(pDX, IDC_EDIT4, d);
}


BEGIN_MESSAGE_MAP(Dlg1, CDialogEx)
END_MESSAGE_MAP()


// Dlg1 消息处理程序
