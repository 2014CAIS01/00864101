/*
【问题描述】
输入一个正整数n(1 <n=<10)，再输入n 个整数，将它们从大到小排序后输出｡
提示：本题是从大到小排序
          （1）定义数组
          （2）使用for循环给数组元素赋值
          （3）对n个整数排序
          （4）输出n个数组元素的值
输入输出示例（下划线表示输入）
Input n: 4
Input 4 integers: 5 1 7 6
After sorted: 7   6   5   1
【样例说明】：后面有一个空格。输出结果中每个数字后面有3个空格。注意字母大小写。
*/
#include <stdio.h>
int main()
{
    int n, i, j, temp, a[10];
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
        {
            if(a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    printf("After sorted: ");
    for (i = 0; i < n; i++)
        printf("%d   ", a[i]);
    return 0;
}
