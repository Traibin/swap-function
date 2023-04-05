#include"swap.h"

//函数定义
void swap(int a, int b)//值传递
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void swap01(int* p1, int* p2)//地址传递
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}