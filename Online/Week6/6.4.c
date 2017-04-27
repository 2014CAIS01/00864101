/*
【问题描述】
要求定义并调用函数 is(number)判断number的各位数字之立方和是否等于其自身｡ 如果相等返回 1，否则返回 0。
输入2 个正整数m 和n,输出m~n之间的所有水仙花数｡水仙花数是指各位数字的立方和等于其自身的数｡
要求定义并调用函数is(number)判断number的各位数字之立方和是否等于其自身｡
【输入形式】
输入2个正整数m 和n
【输入输出样例1】（下划线部分表示输入）
Input m: 100
Input n: 400
153
370
371
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int is(int n);
int main()
{
	int m, n, i;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	for (i = m; i <= n; i++)
		if (is(i))
			printf("%d\n", i);
	return 0;
}
int is(int n)
{
	int temp = 0;
	int num = n;
	while (n > 0)
	{
		temp = temp + ((n % 10) * (n % 10) * (n % 10));
		n /= 10;
	}
	return temp == num ? 1 : 0;
}
