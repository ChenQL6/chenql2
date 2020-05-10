// 实验1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class point
{
public:
	int x;
	int y;
	void output()
	{
		cout << x << endl << y << endl;
	}
};

void main()
{
	point pt;
	pt.output();

}

