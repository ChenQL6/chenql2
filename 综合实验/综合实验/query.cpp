#include "stdafx.h"
#include "�ۺ�ʵ��.h"
#include "query.h"
#include "afxdialogex.h"


// query �Ի���

IMPLEMENT_DYNAMIC(query, CDialogEx)

query::query(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, where(_T(""))
{

}

query::~query()
{
}

void query::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, where);
}


BEGIN_MESSAGE_MAP(query, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT1, &query::OnEnChangeEdit1)
END_MESSAGE_MAP()

void query::OnEnChangeEdit1()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
