#pragma once
class pic : public CDialogEx
{
	DECLARE_DYNAMIC(pic)

public:
	pic(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~pic();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();
	CString path;
};