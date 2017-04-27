/*	
输入一批正整数（以零或负数为结束标志），求其中的奇数和。要求定义和调用函数int even(int n)判断数的奇偶性，当n为偶数时返回1，否则返回0。(要求：在主函数中输入一批正整数,以零或负数为结束标志。调用函数even(n)判断数的奇偶性，并输出奇数和。)
【输入形式】从键盘输入一批正整数（以零或负数为结束标志）。输入时整数之间用空格分隔。
【输出形式】输出奇数和。
【样例输入1】1 2 3 4 5 6 0
*/
#include <stdio.h>
int even(int n);
int main()
{
	int num, sum = 0;
	scanf("%d", &num);
	while (num > 0)
	{
		if (even(num) == 0)
			sum += num;
		scanf("%d", &num);
	}
	printf("%d", sum);
	return 0;
}
int even(int n)
{
	return n % 2 ? 0 : 1;
}
