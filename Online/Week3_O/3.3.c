/*
【问题描述】
输入两个正整数m和n，求m和n的最大公约数及最小公倍数。
【输入形式】
从键盘输入两个正整数。
【样例输入1】
 6   14
【样例输出1】
 2
 42
【样例输入2】
 15    8
【样例输出2】
 1
 120
 */
#include <stdio.h>
int main()
{
	int a, b, m;
	scanf("%d%d", &a, &b);
	for (m = (a < b ? a : b); m > 0; m--)
		if (a % m == 0 && b % m == 0)
			break;
	printf("%d\n", m);
	printf("%d\n", a * b / m);
	return 0;
}
