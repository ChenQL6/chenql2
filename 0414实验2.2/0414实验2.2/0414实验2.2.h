
// 0414ʵ��2.2.h : 0414ʵ��2.2 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0414ʵ��22App:
// �йش����ʵ�֣������ 0414ʵ��2.2.cpp
//

class CMy0414ʵ��22App : public CWinApp
{
public:
	CMy0414ʵ��22App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0414ʵ��22App theApp;
