#include "stdafx.h"
#include "w32.h"
int T::factorial(int n) 
{
	if (n == 1)return 1;
	else
		return n*factorial(n - 1);
}