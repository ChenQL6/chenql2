
// MFC画线，画矩形，画圆.h : MFC画线，画矩形，画圆 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMFC画线，画矩形，画圆App:
// 有关此类的实现，请参阅 MFC画线，画矩形，画圆.cpp
//

class CMFC画线，画矩形，画圆App : public CWinApp
{
public:
	CMFC画线，画矩形，画圆App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC画线，画矩形，画圆App theApp;
