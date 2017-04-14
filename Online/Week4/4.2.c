/*
输入一个整数，求它的位数 例如，123的位数是3 请使用do-while语句实现循环
注意：要考虑整数是负数时如何处理。
【输入形式】
从键盘输入一个整数。
【输入输出样例1】（下划线部分表示输入）
Input an integer: 1290
count=4
【输入输出样例2】（下划线部分表示输入）
Input an integer: -99
count=2
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
	int num, count = 0;
	printf("Input an integer: ");
	scanf("%d", &num);
	do
		count++;
	while (num/=10);
	printf("count=%d", count);
	return 0;
}
