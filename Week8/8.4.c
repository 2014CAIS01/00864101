/*
【问题描述】建立一个通讯录的结构记录，包括姓名、生日、电话号码。
输入n（n<10）个朋友的信息，再按他们的年龄从大到小的顺序依次输出其信息
提示：（1）定义结构类型   
      （2）定义结构数组   
【输入形式】先输入朋友数n（整型，n<10），再依次输入每个朋友的姓名（字符串）、生日（整型）、和电话号码（字符串）。
【输入输出样例】（下划线部分表示输入）
Input n:3
Input the name,birthday,number of the 1 friend:zhang 19850403 13912345678
Input the name,birthday,number of the 2 friend:wang 19821020 0571-88018448
Input the name,birthday,number of the 3 friend:qian 19840619 13609876543
wang□19821020□0571-88018448
qian□19840619□13609876543
zhang□19850403□13912345678
【样例说明】
按朋友年龄从大到小的顺序依次输出每位朋友的信息,内容与格式如下
姓名□生日□电话号码
%s□%d□%s
□表示空格
*/
#include <stdio.h>
struct list
{
	char name[10];
	int birthday;
	char number[15];
};
int main()
{
	int i, j, n;
	struct list a[10], temp;
	printf("Input n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Input the name,birthday,number of the %d friend:", i + 1);
		scanf("%s%d%s", a[i].name, &a[i].birthday, a[i].number);
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (a[i].birthday > a[i + 1].birthday)
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
	for (i = 0; i < n; i++)
		printf("%s %d %s\n", a[i].name, a[i].birthday, a[i].number);
	return 0;
}
