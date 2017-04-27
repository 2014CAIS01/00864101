/*
输入两个数，输出其中较大的数。要求定义和调用函数int max(int a,int b)找出并返回a、b中较大的数。
(要求：在主函数中输入两个整数，调用函数max(a,b)求出最大值，并输出最大值。)
【输入形式】从键盘输入两个整数。输入时整数之间用空格分隔。
【输出形式】输出最大值（是整数）。
【样例输入1】-456    100
【样例输出1】100
*/
#include <stdio.h>
int max(int a, int b);
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", max(a, b));
    return 0;
}
int max(int a, int b)
{
    return a > b ? a : b;
}
