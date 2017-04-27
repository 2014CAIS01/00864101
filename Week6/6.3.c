/*
【问题描述】要求定义并调用函数factorsum(number),它的功能是返回number 的因子和｡
输入2 个正整数m 和n,输出m ~n 之间的所有完数,完数就是因子和与它本身相等的数｡要求定义并调用函数factorsum(number),它的功能是返回number 的因子和｡
例如,factorsum(12)的返回值是16(1 +2 +3 +4 +6)｡
【输入形式】
从键盘输入2个正整数m 和n。
【输出形式】
输出m ~n 之间的所有完数。
【样例输入1】（下划线部分为键盘输入，其余部分为程序输出）
Input m: 1
Input n: 100
【样例输出1】(输出格式控制符为：%5d)
	1	6	28
【样例输入2】（下划线部分为键盘输入，其余部分为程序输出）
Input m: 1
Input n: 500
【样例输出2】(输出格式控制符为：%5d)
	1	6	28	496
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int factorsum(int num);
int main()
{
	int m, n, i;
	printf("Input m: ");
	scanf("%d", &m);
	printf("Input n: ");
	scanf("%d", &n);
	for (i = m; i <= n; i++)
		if (factorsum(i) == i)
			printf("%5d", i);
	return 0;
}
int factorsum(int num)
{
	int i, sum = 1;
	for (i = 2; i <= num/2; i++)
		if (num % i == 0)
			sum += i;
	return sum;
}
