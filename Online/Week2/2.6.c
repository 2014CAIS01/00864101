/*
【问题描述】编程使用if语句计算多分段函数的值。定义两个双精度浮点型变量（语句为 double x,y;），从键盘输入1个实数，作为x的值(语句为scanf("%lf",&x);)，然后根据下面的条件计算变量y的值，输出计算结果：
           当 x<0时，y=0
           当  x<=15并且x>=0时，y=1.5*x
           当 x>15时，y=5*x/3
【输入形式】从键盘输入1个实数
【输出形式】
【样例输入1】-5
【样例输出1】x=-5.00,y=0.00
【样例输入2】10
【样例输出2】x=10.00,y=15.00
【样例输入3】50
【样例输出3】x=50.00,y=83.33
【样例说明】等号两边无空格，小数点后保留2位
*/
#include <stdio.h>
int main()
{
    double x, y;
    scanf("%lf", &x);
    if (x < 0)
        y = 0;
    else if (x > 15)
        y = 5 * x / 3;
    else
        y = 1.5 * x;
        printf("x=%.2f,y=%.2f", x, y );
    return 0;
}
