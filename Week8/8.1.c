/*
【问题描述】输入4个整数a1,a2,b1,b2,分别表示2个复数的实部与虚部。
 利用结构变量求解2个复数之积：（a1+a2i）*(b1+b2i)，乘积的实部为：a1*b1-a2*b2,虚部为：a1*b2+a2*b1
提示：(1)先定义结构数据类型   （参考教材P154）
(本题定义的结构类型应包含2个结构成员，分别表示复数的实部和虚部) 
struct fushu  
{
	int  x;
	int  y;
};
	(2)再定义结构变量
	(3)对结构变量成员赋值后，计算乘积      
	(4)输出结果       
【输入形式】依次输入4个整数a1,a2,b1,b2,分别表示2个复数的实部与虚部
【输入输出样例】（下划线部分表示输入）
Input a1,a2,b1,b2:3 4 5 6
(3+4i)*(5+6i)=-9+38i 
【样例说明】
输出积复数,输出格式为(%d+%di)*(%d+%di)=%d+%di
标点符号全部为英文:
*/
#include <stdio.h>
struct complex
{
	int re;
	int im;
};
int main()
{
	struct complex x, y, z;
	printf("Input a1,a2,b1,b2:");
	scanf("%d%d%d%d", &x.re, &x.im, &y.re, &y.im);
	z.re = x.re * y.re - x.im * y.im;
	z.im = x.re * y.im + x.im * y.re;
	printf("(%d+%di)*(%d+%di)=%d+%di", x.re, x.im, y.re, y.im, z.re, z.im);
	return 0;
}
