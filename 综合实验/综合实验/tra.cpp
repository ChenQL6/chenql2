#include "stdafx.h"
#include "综合实验.h"
#include "tra.h"
#include "afxdialogex.h"


// tra 对话框

IMPLEMENT_DYNAMIC(tra, CDialogEx)

tra::tra(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG5, pParent)
	, ss(_T(""))
{

}

tra::~tra()
{
}

void tra::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ss);
}


BEGIN_MESSAGE_MAP(tra, CDialogEx)
END_MESSAGE_MAP()