
// Mweek9ʵ���ʵ��1.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMweek9ʵ���ʵ��1App: 
// �йش����ʵ�֣������ Mweek9ʵ���ʵ��1.cpp
//

class CMweek9ʵ���ʵ��1App : public CWinApp
{
public:
	CMweek9ʵ���ʵ��1App();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMweek9ʵ���ʵ��1App theApp;