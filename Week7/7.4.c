/*
【问题描述】
输入5个字符串，输出其中最大的字符串。
提示：因为本题每个字符串之间可以用空格分隔，因此
输入一个字符串时，本题需要用语句scanf("%s",str);
如果输入一个字符串时使用语句gets(str);  将空格也读入字符串。 
【运行时的输入输出样例】（下划线部分表示输入）
Input 5 strings:
Wang
Li
Zha
Jin
Xian
Max is:Zha
*/
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	char max[100];
	int i;
	printf("Input 5 strings:\n");
	scanf("%s", max);

	for (i = 1; i < 5; i++)
	{
		scanf("%s", str);
		if (strcmp(str, max) > 0)
			strcpy(max, str);
	}
	printf("Max is:%s", max);
	return 0;
}
