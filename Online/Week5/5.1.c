/*
【问题描述】
输入一个正整数n(1 <n=<10)，再输入n个整数，输出最大值及其下标(设最大值唯一,下标从0 开始)｡
输入输出示例 (下划线表示输入)
Input n:  5
Input 5 integers:  1   2   5   4   0
max=5,index=2
*/
#include <stdio.h>
#define INF 0x7fffffff
int main()
{
    int i, n, index = 0, max=-INF;
    int a[10];
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input %d integers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        max = a[i] > max ? index = i , a[i] : max;
    }
    printf("max=%d,index=%d", max, index);
    return 0;
}
