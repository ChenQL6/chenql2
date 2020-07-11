// Dial.cpp : 实现文件
//

#include "stdafx.h"
#include "综合实验四.h"
#include "Dial.h"
#include "afxdialogex.h"


// Dial 对话框

IMPLEMENT_DYNAMIC(Dial, CDialogEx)

Dial::Dial(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, s(_T(""))
{

}

Dial::~Dial()
{
}

void Dial::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, s);
}


BEGIN_MESSAGE_MAP(Dial, CDialogEx)
END_MESSAGE_MAP()


// Dial 消息处理程序
