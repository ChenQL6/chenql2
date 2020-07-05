#include "stdafx.h"
#include "综合实验.h"
#include "list.h"
#include "afxdialogex.h"


// list 对话框

IMPLEMENT_DYNAMIC(list, CDialogEx)

list::list(CWnd* pParent /*=NULL*/)
	:ss(_T(""))
{

}

list::~list()
{
}

void list::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, ss);
	DDX_Control(pDX, IDC_EDIT1, str);
}


BEGIN_MESSAGE_MAP(list, CDialogEx)
	ON_BN_CLICKED(IDOK, &list::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &list::OnBnClickedButton1)
END_MESSAGE_MAP()


// list 消息处理程序


BOOL list::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	UpdateData(false);
	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}



void list::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
}
