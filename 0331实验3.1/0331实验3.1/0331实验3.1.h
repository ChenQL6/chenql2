
// 0331ʵ��3.1.h : 0331ʵ��3.1 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMy0331ʵ��31App:
// �йش����ʵ�֣������ 0331ʵ��3.1.cpp
//

class CMy0331ʵ��31App : public CWinApp
{
public:
	CMy0331ʵ��31App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0331ʵ��31App theApp;
