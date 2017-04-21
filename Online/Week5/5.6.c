/*
【问题描述】将一个3X2 的矩阵（3行2列）的矩阵存入一个3X2 的二维数组中，输出矩阵。
然后找出矩阵中的最大值以及最大值所在的行下标和列下标，
输出最大值所在的行下标和列下标及最大值。
提示：
    （1）定义二维数组： int  a[3][2];
    （2）为二维数组赋值
    （3）按矩阵的形式输出二维数组
    （4）找出二维数组中的最大值，同时记录其行下标和列下标
    （5）输出最大值以及最大值所在的行下标和列下标
【样例输入输出】下划线部分表示从键盘输入
Enter 6 integers:
3      2
10    -9
6     -1

  3      2
 10     -9
  6     -1
max=a[1][0]=10
【样例说明】
输出矩阵时整数按照 %4d 格式输出。
输入提示：后有一个空格，注意字母大小写。
*/
#include <stdio.h>
#define INF 0x7fffffff
int main()
{
    int a[3][2];
    int i, j, maxi = 0, maxj = 0;
    int max = -INF;
    printf("Enter 6 integers: ");
    for (i = 0; i < 3; i++)
        for (j = 0 ; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
            max = a[i][j] > max ? maxi = i, maxj = j, a[i][j] : max;
        }
    for (i = 0; i < 3; i++)
    {
        for (j = 0 ; j < 2; j++)
            printf("%4d", a[i][j]);
        printf("\n");
    }
    printf("max=a[%d][%d]=%d", maxi, maxj, max);
    return 0;
}
