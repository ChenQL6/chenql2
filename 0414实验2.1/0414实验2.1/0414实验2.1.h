
// 0414ʵ��2.1.h : 0414ʵ��2.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0414ʵ��21App:
// �йش����ʵ�֣������ 0414ʵ��2.1.cpp
//

class CMy0414ʵ��21App : public CWinApp
{
public:
	CMy0414ʵ��21App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0414ʵ��21App theApp;
