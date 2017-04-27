/*
【问题描述】编写程序，求两个整数的和、差、积、商、余数。定义两个整型变量x,y; 调用输入函数scanf()从键盘输入两个整数，保存到变量x,y中。计算运算结果，使用输出函数printf()将运算结果输出。
【输入形式】从键盘输入两个整数，输入时两个整数之间用空格分隔。
【输出形式】从屏幕上显示运算结果，运算结果是整数。输出语句提示：printf("he=%d\n",x+y); 其中%d表示输出的是整数，\n表示换行。
【样例输入】100 5
【样例输出】
			he=105
			cha=95
			ji=500
			shang=20
			yushu=0
【样例说明】输出为5行，5次调用printf()函数,注意换行。等号两边没有空格。两个整数的运算提示：求和x+y   求差x-y    求积 x*y    求商x/y    求两个整数的余数x%y （整数之间才有求余运算）
*/
#include <stdio.h>
int main()
{
	int x, y;
	scanf("%d%d", &x, &y);
	printf("he=%d\n", x + y);
	printf("cha=%d\n", x - y);
	printf("ji=%d\n", x * y);
	printf("shang=%d\n", x / y);
	printf("yushu=%d\n", x % y);
	return 0;
}
