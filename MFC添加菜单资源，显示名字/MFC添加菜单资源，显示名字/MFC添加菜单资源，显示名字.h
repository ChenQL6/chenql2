
// MFC��Ӳ˵���Դ����ʾ����.h : MFC��Ӳ˵���Դ����ʾ���� Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CMFC��Ӳ˵���Դ����ʾ����App:
// �йش����ʵ�֣������ MFC��Ӳ˵���Դ����ʾ����.cpp
//

class CMFC��Ӳ˵���Դ����ʾ����App : public CWinApp
{
public:
	CMFC��Ӳ˵���Դ����ʾ����App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC��Ӳ˵���Դ����ʾ����App theApp;
