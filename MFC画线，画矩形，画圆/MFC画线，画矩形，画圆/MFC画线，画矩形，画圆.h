
// MFC���ߣ������Σ���Բ.h : MFC���ߣ������Σ���Բ Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC���ߣ������Σ���ԲApp:
// �йش����ʵ�֣������ MFC���ߣ������Σ���Բ.cpp
//

class CMFC���ߣ������Σ���ԲApp : public CWinApp
{
public:
	CMFC���ߣ������Σ���ԲApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC���ߣ������Σ���ԲApp theApp;
