
// Dlg0(0407).h : Dlg0(0407) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg00407App:
// �йش����ʵ�֣������ Dlg0(0407).cpp
//

class CDlg00407App : public CWinApp
{
public:
	CDlg00407App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg00407App theApp;
