
// Dlg1(0407).h : Dlg1(0407) Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDlg10407App:
// �йش����ʵ�֣������ Dlg1(0407).cpp
//

class CDlg10407App : public CWinApp
{
public:
	CDlg10407App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDlg10407App theApp;
