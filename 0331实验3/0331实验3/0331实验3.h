
// 0331实验3.h : 0331实验3 应用程序的主头文件
//
#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"       // 主符号


// CMy0331实验3App:
// 有关此类的实现，请参阅 0331实验3.cpp
//

class CMy0331实验3App : public CWinApp
{
public:
	CMy0331实验3App();


// 重写
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// 实现
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMy0331实验3App theApp;
