// week10实验课实验3.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "week10实验课实验3.h"


// 这是导出变量的一个示例
WEEK103_API int nweek10实验课实验3=0;

// 这是导出函数的一个示例。
WEEK103_API int fnweek10实验课实验3(void)
{
    return 42;
}

// 这是已导出类的构造函数。
// 有关类定义的信息，请参阅 week10实验课实验3.h
Cweek10实验课实验3::Cweek10实验课实验3()
{
    return;
}


WEEK103_API int factorial(int n)
{
	if (n == 0)return 1;
	else return factorial(n - 1)*n;
}

float FAC::convert(float deg)
{
	return (3.14159 / 180)*deg;
};
