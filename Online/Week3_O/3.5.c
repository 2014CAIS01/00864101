/*
【问题描述】
从键盘上输入任意正整数，编程判断该数是否为回文数。所谓回文数就是从左到右读这个数与从右到左读这个数是一样的。例如，12321、4004都是回文数。
【输入形式】一个正整数m，m<100000000
【输出形式】Y 或者 N 中的其中一个
【样例输入】151
【样例输出】Y
*/
#include <stdio.h>
int main()
{
	int num, temp, reverse = 0;
	scanf("%d", &num);
	temp = num;
	do
	{
		reverse = 10 * reverse + temp % 10;
		temp /= 10;
	} while (temp > 0);
	if (num == reverse)
		printf("Y");
	else
		printf("N");
	return 0;
}
