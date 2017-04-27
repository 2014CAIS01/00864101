/*
【问题描述】
输入2个正整数a和n，求a+aa+aaa+a...a（n个a）之和 例如，输入2和3，输出246（2+22+222）｡
提示：for循环，求累加。通过前一项求出后一项，再累加。
【输入形式】
从键盘输入正整数a和正整数n。
【输入输出样例1】（下划线部分表示输入）
Input a,n:  8   5
s=98760
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
	int a, n, temp, i, sum = 0;
	printf("Input a,n: ");
	scanf("%d%d", &a, &n);
	temp = a;
	for (i = 0; i < n; i++)
	{
		sum += temp;
		temp = 10 * temp + a;
	}
	printf("s=%d", sum);
	return 0;
}
