/*
【问题描述】定义1个整型变量，从键盘输入1个整数（调用scanf()函数），使用if 语句（二分支结构）对整数进行判断，当整数大于0时，输出yes，否则输出no。
【输入形式】从键盘输入一个整数
【输出形式】输出yes或no
【样例输入1】10
【样例输出1】yes
【样例输入2】-6
【样例输出2】no
【样例说明】注意字母是小写的。严格按照样例输出。
*/
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num > 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
}
