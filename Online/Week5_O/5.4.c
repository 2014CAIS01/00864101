/*
【问题描述】要求定义和调用函数fact(n)计算n!,函数类型为double｡
输入一个正整数n,生成一张阶乘表,输出1! ~n! 的值｡要求定义和调用函数fact(n)计算n!,函数类型为double｡
【输入形式】
从键盘输入一个正整数n。
【输入输出样例1】（下划线部分表示输入）
Enter n: 3
1!=1
2!=2
3!=6
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
double fact(int n);
int main()
{
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        printf("%d!=%.0f\n", i, fact(i));
    return 0;
}
double fact(int n)
{
    int i;
    double ans=1;
    for (i = 1; i <= n; i++)
        ans *= i;
    return ans;
}
