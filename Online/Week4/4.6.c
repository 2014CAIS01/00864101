/*
【问题描述】
输入两个正整数m和n（m>=1，n<=1000），输出m到n之间的所有水仙花数 水仙花数是指各位数字的立方和等于其自身的数｡
例如，153的各位数字的立方和是13+53+33 =153
【输入形式】
从键盘输入两个正整数m和n。
【输入输出样例1】（下划线部分表示输入）
Input m: 100
Input n: 400
153
370
371
【样例说明】
输入提示符后要加一个空格。
每行输出一个水仙花数。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
	int m, n, i, temp, sum;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	for (i = m; i <= n; i++)
	{
		temp = i;
		sum = 0;
		do
		{
			sum += (temp % 10)*(temp % 10)*(temp % 10);
		} while (temp/=10);
		if (sum == i)
			printf("%d\n", i);
	}
	return 0;
}
