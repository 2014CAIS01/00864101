/*
【问题描述】
输入一个年份（是整数），判断是否为闰年，如果是闰年输出yes，否则输出no。
提示：（判断闰年的条件是：年份能被4整除但不能被100整除，或者年份能被400整除。）
【输入形式】从键盘输入1个整数
【输出形式】
【样例输入1】2008
【样例输出1】yes
【样例输入2】1999
【样例输出2】no
注意：请严格按照样例输入输出，注意字母大小写。
*/
 #include <stdio.h>
 int main()
 {
    int year;
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0)
        printf("yes\n");
    else if (year % 400 == 0)
        printf("yes\n");
    else
        printf("no\n");
    return 0;
 }
