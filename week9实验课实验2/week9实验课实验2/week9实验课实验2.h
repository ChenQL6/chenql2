
// week9ʵ���ʵ��2.h : week9ʵ���ʵ��2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// Cweek9ʵ���ʵ��2App:
// �йش����ʵ�֣������ week9ʵ���ʵ��2.cpp
//

class Cweek9ʵ���ʵ��2App : public CWinApp
{
public:
	Cweek9ʵ���ʵ��2App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cweek9ʵ���ʵ��2App theApp;
