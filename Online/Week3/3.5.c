/*
【问题描述】
输入5 个学生的数学成绩,判断他们的成绩是否及格。
如果成绩低于60,输出"Fail";否则,输出"Pass"。
提示：使用for循环语句,循环1次输入1个成绩，进行判断后输出Fail或Pass。
【输入形式】
输入学生成绩。
【输入输出样例1】（下划线部分表示输入）
Enter grade: 77
Pass
Enter grade: 59
Fail
Enter grade: 92
Pass
Enter grade: 40
Fail
Enter grade: 60
Pass
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    int i, grade;
    for (i = 0; i < 5; i++)
    {
        printf("Enter grade: ");
        scanf("%d", &grade);
        if (grade < 60)
            printf("Fail\n");
        else
            printf("Pass\n");
    }
    return 0;
}
