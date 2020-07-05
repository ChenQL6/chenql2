#pragma once
class tra : public CDialogEx
{
	DECLARE_DYNAMIC(tra)

public:
	tra(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~tra();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString ss;
};