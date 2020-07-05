#include "stdafx.h"
#include "综合实验.h"
#include "alter.h"
#include "afxdialogex.h"


// alter 对话框

IMPLEMENT_DYNAMIC(alter, CDialogEx)

alter::alter(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG3, pParent)
	, Sname(_T(""))
	, Sno(_T(""))
	, Smajor(_T(""))
	, Ssex(_T(""))
	, Sbirth(_T(""))
	, Sphone(_T(""))
	, Saddress(_T(""))
	, Spath(_T(""))
{

}

alter::~alter()
{
}

void alter::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, Sname);
	DDX_Text(pDX, IDC_EDIT2, Sno);
	DDX_Text(pDX, IDC_EDIT4, Smajor);
	DDX_Text(pDX, IDC_EDIT3, Ssex);
	DDX_Text(pDX, IDC_EDIT6, Sbirth);
	DDX_Text(pDX, IDC_EDIT5, Sphone);
	DDX_Text(pDX, IDC_EDIT7, Saddress);
	DDX_Text(pDX, IDC_EDIT8, Spath);
}


BEGIN_MESSAGE_MAP(alter, CDialogEx)
END_MESSAGE_MAP()

