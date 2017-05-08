/*
【问题描述】建立一个学生的结构记录，包括学号、姓名和成绩。输入整数n（n<10）,再输入n个学生的基本信息，要求计算并输出他们的平均成绩（保留2位小数）
提示：定义结构体，再定义结构体数组，可参考教材P158
【输入形式】先输入学生数n（整型，n<10），再依次输入每个学生的学号（整型）姓名（字符串）和成绩（实型）。 
【输入输出样例】（下划线部分表示输入）
Input n:3
Input the number,name,score of the 1 student:1 zhang 70
Input the number,name,score of the 2 student:2 wang 80
Input the number,name,score of the 3 student:3 qian 90
The average score is:80.00
【样例说明】
输出格式为 The average score is:%.2f 
标点符号全部为英文:
*/
#include <stdio.h>
struct student
{
	int num;
	char name[10];
	double score;
};
int main()
{
	int i, n;
	double sum = 0;
	struct student s[10];
	printf("Input n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Input the number,name,score of the %d student:", i + 1);
		scanf("%d%s%lf", &s[i].num, s[i].name, &s[i].score);
		sum += s[i].score;
	}
	printf("The average score is:%.2f", sum / n);
	return 0;
}
