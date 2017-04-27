/*
【问题描述】
输入10个整数，统计正整数的个数，输出统计结果。要求使用数组。
【输入形式】从键盘输入整数
【输出形式】输出整数
【样例输入1】下划线表示输入
-10    5    0    100    55   200    -1    99    88   33
【样例输出1】
count=7
【样例说明】注意字母大小写
*/
#include <stdio.h>
int main()
{
	int i, count = 0;
	int num[10];
	for (i = 0; i < 10; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < 10; i++)
	{
		if (num[i] > 0)
			count++;
	}
	printf("count=%d", count);
	return 0;
}
