// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "week9ʵ���ʵ��1.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;


// MyDlg �Ի���

IMPLEMENT_DYNAMIC(MyDlg, CDialogEx)

MyDlg::MyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

MyDlg::~MyDlg()
{
}

void MyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MyDlg, CDialogEx)
	ON_LBN_SELCHANGE(IDC_LIST1, &MyDlg::OnLbnSelchangeList1)
	ON_BN_CLICKED(IDC_BUTTON1, &MyDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// MyDlg ��Ϣ�������


void MyDlg::OnLbnSelchangeList1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


void MyDlg::OnBnClickedButton1()
{

}
