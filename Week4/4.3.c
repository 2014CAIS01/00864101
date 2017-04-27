/*
【问题描述】
输入一个正整数n，再输入n个整数，输出最小值
【输入形式】
从键盘输入一个正整数n和n个整数。
【输入输出样例1】（下划线部分表示输入）
Input n: 4
Input numbers:  -2    -123     100    0
min=-123
【输入输出样例2】（下划线部分表示输入）
Input n: 4
Input numbers:  -9    -1    1    -8
min=-9

【输入输出样例3】（下划线部分表示输入）
Input n: 3
Input numbers: 5   3   1
min=1
【样例说明】
输入提示符后要加一个空格。
输入的数据之间以一个空格相隔。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
	int i, n;
	int num, min;
	printf("Input n: ");
	scanf("%d", &n);
	printf("Input numbers: ");
	scanf("%d", &min);
	for (i = 1; i < n; i++)
	{
		scanf("%d", &num);
		min = num < min ? num : min;
	}
	printf("min=%d", min);
	return 0;
}
