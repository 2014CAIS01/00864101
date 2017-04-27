/*
【问题描述】  使用数组
输入一个正整数n(1 <n<=10)，再输入n 个整数，求出这些整数的平均值并输出，保留2位小数。
然后统计这些整数中大于等于平均值的有几个。输出统计结果。
输入输出示例（下划线表示输入）
Input n: 4
Input 4 integers:  100   10     0     5
average=28.75
count=1
【样例说明】：后面有一个空格。注意字母大小写。
*/
#include <stdio.h>
int main()
{
	int i, n, sum = 0,count = 0;
	int num[10];
	double average;
	printf("Input n: ");
	scanf("%d", &n);
	printf("Input %d integers: ", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
	}
	average = sum * 1.0 / n;
	printf("average=%.2f\n", average);
	for (i = 0; i < n; i++)
		if (num[i] >= average)
			count++;
	printf("count=%d\n", count);
	return 0;
}
