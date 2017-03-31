/*
【问题描述】编程题，定义一个整型变量(假设变量名为num)，从键盘给其赋值（语句为scanf("%d",&num);），然后分别用十进制、八进制、十六进制形式输出。
【输入形式】从键盘输入一个正整数。
【输出形式】
【样例输入】12
【样例输出】12,14,c
【样例说明】样例输出中，字符c是小写字母。
*/
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    printf("%d,%o,%x", num, num, num);
    return 0;
}
