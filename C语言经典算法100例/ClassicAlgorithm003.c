#include <stdio.h>
#include <math.h>

int main()
{
	long int x, y, i;
	for (i = 0; i < 10e4; i++)
	{
		x = sqrt(i + 100);
		y = sqrt(i + 268);

		if (pow(x,2) == i+100 && pow(y,2) == i+268)
		/*一个数的平方根的平方等于它本身，则说明这个数
		是一个完全平方数*/
		{
			printf("%ld\n", i);
		}
	}
}
