/*
【问题描述】
输入x，计算并输出下列分段函数sign（x） 的值。
y=sign(x)=-1   (x<0)
         =0    (x=0)
         =1    (x>0)
【输入形式】
从键盘输入实数x的值。
【输入输出样例1】（下划线部分表示输入）
Enter x: 10
sign(10.000000)=1
【输入输出样例2】（下划线部分表示输入）
Enter x: 0
sign(0.000000)=0
【输入输出样例3】（下划线部分表示输入）
Enter x: -98
sign(-98.000000)=-1
【样例说明】
输入提示符后要加一个空格。
输出语句的=两边无空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    double x;
    int y;
    printf("Enter x: ");
    scanf("%lf", &x);
    if (x > 0)
        y = 1;
    else if (x < 0)
        y = -1;
    else
        y = 0;
    printf("sign(%f)=%d", x, y);
    return 0;
}
