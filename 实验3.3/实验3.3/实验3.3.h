
// ʵ��3.3.h : ʵ��3.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cʵ��33App:
// �йش����ʵ�֣������ ʵ��3.3.cpp
//

class Cʵ��33App : public CWinApp
{
public:
	Cʵ��33App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cʵ��33App theApp;
