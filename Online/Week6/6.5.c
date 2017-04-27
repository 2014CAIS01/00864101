/*	
【问题描述】   
输入2 个正整数m 和n,统计并输出m 和n 之间的素数的个数以及这些素数的和｡素数就是只能被1 和自身整除的正整数,最小的素数是2｡
要求定义并调用函数prime(x)判断x 是否为素数,当x 为素数时返回1,否则返回0｡
【输入形式】
输入2个正整数m和n
【输入输出样例1】（下划线部分表示输入）
Input m: 1
Input n: 10
count=4,sum=17
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int prime(int n);
int main()
{
	int m, n, i, count = 0, sum = 0;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	for (i = m; i <= n; i++)
		if (prime(i))
		{
			count++;
			sum += i;
		}
	printf("count=%d,sum=%d", count, sum);
	return 0;
}
int prime(int n)
{
	int i;
	if (n == 1)
		return 0;
	for (i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
