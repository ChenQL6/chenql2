// week10ʵ���ʵ��3.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "week10ʵ���ʵ��3.h"


// ���ǵ���������һ��ʾ��
WEEK103_API int nweek10ʵ���ʵ��3=0;

// ���ǵ���������һ��ʾ����
WEEK103_API int fnweek10ʵ���ʵ��3(void)
{
    return 42;
}

// �����ѵ�����Ĺ��캯����
// �й��ඨ�����Ϣ������� week10ʵ���ʵ��3.h
Cweek10ʵ���ʵ��3::Cweek10ʵ���ʵ��3()
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
