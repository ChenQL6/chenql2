#pragma once


// Dialog1 对话框

class Dialog1 : public CDialogEx
{
	DECLARE_DYNAMIC(Dialog1)

public:
	Dialog1(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Dialog1();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:

	void foo(CImage& image, int& x, int& y, int& wh, int& hh);
	afx_msg void OnPaint();
	
};
