
// 0414ʵ��2.3.h : 0414ʵ��2.3 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0414ʵ��23App:
// �йش����ʵ�֣������ 0414ʵ��2.3.cpp
//

class CMy0414ʵ��23App : public CWinApp
{
public:
	CMy0414ʵ��23App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0414ʵ��23App theApp;
