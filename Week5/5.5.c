/*
【问题描述】
输入一个正整数n(1<n=<6)和n 阶矩阵a 中的元素，如果a 是上三角矩阵，输出YES；否则，输出NO
(上三角矩阵,即主对角线以下的元素都为0，主对角线为从矩阵的左上角至右下角的连线)｡
【输入形式】
从键盘输入一个正整数n和矩阵阵列。
【输入输出样例1】（下划线部分表示输入）
Input n: 3
Input array:
1  2  3
0  4  5
0  0  6
YES
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    int i, j, n, a[6][6];
    int flag = 0;
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input array: ");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++)
        for (j = 0; j < i; j++)
            flag = flag || a[i][j];
    if (flag)
        printf("NO");
    else
        printf("YES");
    return 0;
}
