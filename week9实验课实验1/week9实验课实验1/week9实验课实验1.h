
// week9ʵ���ʵ��1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// Cweek9ʵ���ʵ��1App: 
// �йش����ʵ�֣������ week9ʵ���ʵ��1.cpp
//

class Cweek9ʵ���ʵ��1App : public CWinApp
{
public:
	Cweek9ʵ���ʵ��1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern Cweek9ʵ���ʵ��1App theApp;