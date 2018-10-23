#include <stdio.h>
#include <stdlib.h>

int main()
{
	float profit, Bonus;
	printf("请输入当月利润(万元)：");
	scanf("%f", &profit);
	profit = profit*1e4;

	if(profit <= 10e4)
		Bonus = profit * 0.1;
	else if(10e4 < profit <= 20e4)
		Bonus = 10e4 * 0.1 + (profit - 10e4)*0.075;
	else if(20e4 < profit <= 40e4)
		Bonus = 10e4 * 0.1 + (20e4 - 10e4)*0.075 + (profit - 20e4)*0.05;
	else if(40e4 < profit <= 60e4)
		Bonus = 10e4 * 0.1 + (20e4 - 10e4)*0.075 + (40e4 - 20e4)*0.05 + 
			 (profit - 40e4)*0.03;
	else if(60e4 < profit <= 100e4)
		Bonus = 10e4 * 0.1 + (20e4 - 10e4)*0.075 + (40e4 - 20e4)*0.05 + 
			 (60e4 - 40e4)*0.03 + (profit - 60e4)*0.015;
	else if(profit > 100e4)
		Bonus = 10e4 * 0.1 + (20e4 - 10e4)*0.075 + (40e4 - 20e4)*0.05 + 
			 (60e4 - 40e4)*0.03 + (100e4 - 60e4)*0.015 + (profit-10e4)*0.01;

	printf("当月的奖金为：%f\n", Bonus);
}
