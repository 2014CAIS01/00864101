/*
【问题描述】要求定义和调用函数fact(n)计算n!,函数类型为double｡
根据下列公式可以计算出从n 个不同元素中取出m 个元素的组合数｡编写程序,输入2 个正整数m 和n,计算并输出组合数｡
要求定义和调用函数fact(n)计算n!,函数类型为double｡
提交
【输入形式】
从键盘输入正整数m和正整数n。
【输入输出样例1】（下划线部分表示输入）
Enter m: 5
Enter n: 12
result=792
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
double fact(int n);
int main()
{
    int m, n;
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter n: ");
    scanf("%d", &n);
    double ans = fact(n) / (fact(m) * fact(n - m));
    printf("result=%.0f", ans);
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
