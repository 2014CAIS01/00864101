/*	
【问题描述】
读入一批正整数（以零或负数为结束标志），求其中的奇数和请使用while 语句实现循环
提示：由于循环次数不确定，使用while 循环语句。定义两个整型变量（int  sum,x;)，变量sum保存相加的结果，变量x保存输入的整数。
先输入第1个整数保存在变量x中，然后执行while语句对x进行判断，如果x>0，执行while语句循环体中的语句，在循环体中判断x是否为奇数，如果是奇数将x加入到sum中，
然后读入下一个整数（scanf("%d",&x);），为下一次循环做准备。
直到输入的整数x<=0，结束while循环，输出结果。
【输入形式】
从键盘输入一批正整数（以0或负数为结束标志）。

【输入输出样例1】（下划线部分表示输入）
Input integers: 1   3   90  7  0
The sum of the odd numbers is 11
【输入输出样例2】（下划线部分表示输入）
Input integers:  2    7   88   37   90   9    -1
The sum of the odd numbers is 53

【样例说明】
输入提示符后要加一个空格。
输入的数据之间以一个空格相隔。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
	int x, sum = 0;
	printf("Input integers: ");
	scanf("%d", &x);
	while(x > 0)
	{
		if(x % 2 != 0)
			sum += x;
		scanf("%d", &x);
	}
	printf("The sum of the odd numbers is %d", sum);
	return 0;
}
