#include<stdio.h>
#include<stdlib.h>

int main()
{
	int max4(int a, int b, int c, int d);
	int a, b, c, d, max;
	printf("请输入四个整数：");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	max = max4(a, b, c, d);
	printf("max=%d\n", max);

	system("pause");
	return 0;
}



int max4(int a, int b, int c, int d)
{
	int max2(int a, int b); //在一个函数的定义过程中，调用另一个函数
	return max2(max2(max2(a, b), c), d); //将函数调用作为函数参数
}



int max2(int a, int b)
{
	return a >= b ? a : b;
}
