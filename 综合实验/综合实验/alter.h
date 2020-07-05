#pragma once

// alter 对话框

class alter : public CDialogEx
{
	DECLARE_DYNAMIC(alter)

public:
	alter(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~alter();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString Sname;
	CString Sno;
	CString Smajor;
	CString Ssex;
	CString Sbirth;
	CString Sphone;
	CString Saddress;
	CString Spath;
};
