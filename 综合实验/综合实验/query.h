#pragma once

class query : public CDialogEx
{
	DECLARE_DYNAMIC(query)

public:
	query(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~query();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString where;
	afx_msg void OnEnChangeEdit1();
};