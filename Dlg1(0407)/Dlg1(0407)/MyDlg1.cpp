// MyDlg1.cpp : 实现文件
//

#include "stdafx.h"
#include "Dlg1(0407).h"
#include "MyDlg1.h"
#include "afxdialogex.h"


// MyDlg1 对话框

IMPLEMENT_DYNAMIC(MyDlg1, CDialogEx)

MyDlg1::MyDlg1(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, b(_T(""))
	, a(_T(""))
{

}

MyDlg1::~MyDlg1()
{
}

void MyDlg1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, b);
	DDX_Text(pDX, IDC_EDIT3, a);
}


BEGIN_MESSAGE_MAP(MyDlg1, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg1::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg1 消息处理程序


void MyDlg1::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	this->UpdateData(true);
	c = a;
	a = b;
	b = c;
	UpdateData(false);
}
