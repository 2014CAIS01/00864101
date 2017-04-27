/*
【问题描述】
输入五级制成绩(A ~E),输出相应的百分制成绩(0 ~100)区间。如果输入其他字符（即A--E以外的字符）则输出error。
要求使用switch 语句。
五级制成绩对应的百分制成绩区间为:
A(90-100)
B(80-89)
C(70-79)
D(60-69)
E(0-59)
【输入形式】
从键盘输入等级（字符A,B,C,D,E中任意一个字符）。
【输入输出样例1】（下划线部分表示输入）
Input Grade: B
B is 80-89
【输入输出样例2】（下划线部分表示输入）
Input Grade: C
C is 70-79
【输入输出样例3】（下划线部分表示输入）
Input Grade: M
error
【样例说明】
输入提示符后要加一个空格。
输出语句的=两边无空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Input Grade: ");
    scanf("%c", &ch);
    switch (ch)
    {
        case 'A':printf("A is 90-100"); break;
        case 'B':printf("B is 80-89"); break;
        case 'C':printf("C is 70-79"); break;
        case 'D':printf("D is 60-69"); break;
        case 'E':printf("E is 0-59"); break;
        default :printf("error");
    }
    return 0;
}
