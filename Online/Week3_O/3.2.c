/*
【问题描述】编程计算2+4+6+…+98+100.
【输入形式】无
【输出形式】一个整数
*/
#include <stdio.h>
int main()
{
	int i,sum = 0;
	for (i = 2; i <= 100; i += 2)
		sum += i;
	printf("%d", sum);
	return 0;
}
