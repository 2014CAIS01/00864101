/*
【问题描述】N2-4 编程，输入一个三位整数，求它的个位、十位和百位。
【输入形式】输入三位正整数
【输入输出样例1】（下划线部分表示输入）
Input a number:138
8 3 1
*/
#include <stdio.h>
int main()
{
    int x;
    printf("Input a number:");
    scanf("%d", &x);
    printf("%d %d %d", x % 10, x / 10 % 10 , x / 100);
    return 0;
}
