#include <stdio.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

int main()
{
	bool LeapYear(int year);
	int Year, Month, Day;
	int i, res = 0;
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("请输入年月日:\n");
	scanf("%5d%5d%5d", &Year, &Month, &Day);
	printf("%5d年%5d月%5d日\n", Year, Month, Day);
	if(!LeapYear(Year))  //不是闰年
	{
		for(i=0; i < Month-1; i++)
		{
			res += month[i];
		}
		res += Day;
	}
	else
	{
		for(i=0; i < Month-1; i++)
		{
			res += month[i];
		}
		res += Day;
		if(Month > 2)
			res++;
	}

	printf("%5d年%5d月%5d日是该年中的第%d天\n", Year, Month, Day, res);
	return 0;
}


bool LeapYear(int year)
{
	if((year%400 == 0) || (year%4 == 0 && year%100 != 0))
		return true;
	else
		return false;
}
