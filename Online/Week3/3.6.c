/*
【问题描述】
输入一个正整数n，再输入n个学生的成绩，统计各等级成绩的个数。
成绩等级分为五级，分别为:
A（90-100）、B（80-89）、C（70-79）、D（60-69）和E（0-59）。
提示：使用for循环语句，循环1次读入1个成绩，并进行统计。循环结束后，输出统计结果。
【输入形式】
从键盘输入正整数n，然后再输入n个人的成绩。
【输入输出样例1】（下划线部分表示输入）
Enter n: 5
Enter grade 1: 77
Enter grade 2: 54
Enter grade 3: 92
Enter grade 4: 73
Enter grade 5: 60
The number of A(90-100):1
The number of B(80-89):0
The number of C(70-79):2
The number of D(60-69):1
The number of E(0-59):1
【样例说明】
输入提示Enter n:后要加一个且只能一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    int i, n, grade;
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter grade %d:", i + 1);
        scanf("%d\n", &grade);
        if (grade >= 90) a++;
        else if (grade >= 80) b++;
        else if (grade >= 70) c++;
        else if (grade >= 60) d++;
        else e++;
    }
    printf("The number of A(90-100):%d\n", a);
    printf("The number of B(80-89):%d\n", b);
    printf("The number of C(70-79):%d\n", c);
    printf("The number of D(60-69):%d\n", d);
    printf("The number of E(0-59):%d\n", e);
    return 0;
}
