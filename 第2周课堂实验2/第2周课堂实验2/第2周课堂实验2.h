
// ��2�ܿ���ʵ��2.h : ��2�ܿ���ʵ��2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// C��2�ܿ���ʵ��2App:
// �йش����ʵ�֣������ ��2�ܿ���ʵ��2.cpp
//

class C��2�ܿ���ʵ��2App : public CWinApp
{
public:
	C��2�ܿ���ʵ��2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern C��2�ܿ���ʵ��2App theApp;
