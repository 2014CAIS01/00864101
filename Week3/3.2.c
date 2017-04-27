/*
【问题描述】
输入一个职工的月薪salary，输出应交的个人所得税tax（保留两位小数）。
计算方式：tax=rate*(salary-850)
当salary<=850时，rate=0;
当850<salary<=1350时，rate=5%;
当1350<salary<=2850时，rate=10%;
当2850<salary<=5850时，rate=15%;
当5850<salary，rate=20%;
提示：使用if 语句根据salary，求出rate, 在代码中用0.05表示5%，0.1表示10%，以此类推。
if语句结束后，计算tax的值，并输出结果。
【输入形式】
输入月薪。
【输入输出样例1】（下划线部分表示输入）
Enter the salary: 1010.87
tax=8.04
【输入输出样例2】（下划线部分表示输入）
Enter the salary: 32098.76
tax=6249.75
【输入输出样例3】（下划线部分表示输入）
Enter the salary: 800
tax=0.00
【输入输出样例4】（下划线部分表示输入）
Enter the salary: 4010
tax=474.00
【输入输出样例5】（下划线部分表示输入）
Enter the salary: 2850
tax=200.00
【样例说明】
输入提示符后要加一个空格。
输出语句的=两边无空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    double salary, rate, tax;
    printf("Enter the salary: ");
    scanf("%lf", &salary);
    if (salary <= 850) rate = 0;
    else if (salary <= 1350) rate = 0.05;
    else if (salary <= 2850) rate = 0.1;
    else if (salary <= 5850) rate = 0.15;
    else rate = 0.2;
    tax = rate * (salary - 850);
    printf("tax=%.2f", tax);
    return 0;
}
