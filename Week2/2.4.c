/*
【问题描述】编程。定义1个整型变量，从键盘输入1个整数。使用 if 语句对整数进行判断，如果整数小于0，求它的绝对值。将整数输出。
【输入形式】从键盘输入1个整数
【输出形式】
【样例输入1】-100
【样例输出1】The value is 100.
【样例输入2】8
【样例输出2】The value is 8.
【样例说明】注意大小写字母，样例输出中整数后面有一个符号
*/
#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    if (num < 0)
        num = - num;
    printf("The value is %d.", num);
    return 0;
}
