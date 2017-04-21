/*
【问题描述】
输入一个正整数n(1 <n=<10)，再输入n 个整数,将最小值与第一个数交换，最大值与最后一个数交换，然后输出交换后的n 个数｡
输入输出示例（划线部分表示输入）
Input n: 5
Input 5 integers: 8   2   5   1   4
After swapped: 1   2   5   4   8
【样例说明】 ：后面有一个空格。输出结果中每个数字后面有3个空格。注意字母大小写。
*/
#include <stdio.h>
#define INF 0x7fffffff
int main()
{
    int i, n, temp, a[10];
    int min = INF, max = -INF, index = 0;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++)
        min = a[i] < min ? index = i, a[i] : min;
    temp = a[0];
    a[0] = a[index];
    a[index] = temp;

    for (i = 0; i < n; i++)
        max = a[i] > max ? index = i, a[i] : max;
    temp = a[n-1];
    a[n-1] = a[index];
    a[index] = temp;

    printf("After swapped: ");
    for (i = 0; i < n; i++)
        printf("%d   ", a[i]);
    return 0;
}
