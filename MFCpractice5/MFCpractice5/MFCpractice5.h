
// MFCpractice5.h : MFCpractice5 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFCpractice5App:
// �йش����ʵ�֣������ MFCpractice5.cpp
//

class CMFCpractice5App : public CWinApp
{
public:
	CMFCpractice5App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFCpractice5App theApp;
