/*
	
【问题描述】
输入一个整数，求它的位数以及各位数字之和 例如，123的位数是3，各位数字之和是6
提示：
使用求余运算%可得到1个整数的个位上的数字。例如： 456%10结果为6。
在统计整数的位数时，逐一获取整数个位上的数并相加。
【输入形式】
从键盘输入一个整数。
【输入输出样例1】（下划线部分表示输入）
Input an integer: 1280
count=4,sum=11
【输入输出样例2】（下划线部分表示输入）
Input an integer: -99
count=2,sum=18
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
	int num, count = 0, sum = 0;
	printf("Input an integer: ");
	scanf("%d", &num);
	num = num < 0 ? - num : num;
	do
	{
		count++;
		sum += num % 10;
	}
	while (num/=10);
	printf("count=%d,sum=%d", count, sum);
	return 0;
}
