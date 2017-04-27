/*	
【问题描述】
读入一个整数,统计并输出该数中2的个数｡要求定义并调用函数countdigit(number,digit),它的功能是统计整数number 中数字digit 的个数｡
例如,countdigit(10090,0) 的返回值是3｡
【输入形式】
输入一个整数
【输入输出样例1】（下划线部分表示输入）
Enter an integer: 21252
Number of digit 2: 3
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int countdigit(int num, int digit);
int main()
{
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);
	printf("Number of digit 2: %d", countdigit(num, 2));
	return 0;
}
int countdigit(int num, int digit)
{
	int count = 0;
	while (num > 0)
	{
		if (num % 10 == digit)
			count++;
		num /= 10;
	}
	return count;
}
