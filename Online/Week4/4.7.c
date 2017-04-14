/*
【问题描述】
输入两个正整数m和n（m>=1，n<=500），输出m和n之间的所有素数，每行输出6个，每个正整数按%4d格式输出｡
素数是指只能被1和自身整除的正整数，最小的素数是2｡
提示：
使用for循环对m和n之间所有的整数逐一进行判断，判断整数是否为素数，如果是素数就输出。
正整数 x 按%4d格式输出：printf("%4d",x);
【输入形式】
从键盘输入两个正整数m和n。
【输入输出样例1】（下划线部分表示输入）
Input m: 1
Input n: 35
  2   3  5   7 11  13
  17  19  23  29  31
【样例说明】
每行输出6个正整数，每个正整数按%4d格式输出｡
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
	int i, j, m, n, count = 0;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	for (i = m; i <= n; i++)
	{
		for (j = 2;j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			printf("%4d", i);
			if(++count % 6 ==0)
				printf("\n");
		}
	}
	return 0;
}
