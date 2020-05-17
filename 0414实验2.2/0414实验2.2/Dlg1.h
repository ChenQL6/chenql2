#pragma once


// Dlg1 对话框

class Dlg1 : public CDialogEx
{
	DECLARE_DYNAMIC(Dlg1)

public:
	Dlg1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dlg1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int c;
	int d;
};
