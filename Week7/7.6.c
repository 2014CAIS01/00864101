/*
【问题描述】
字符串复制。输入一个字符串t和一个正整数m，将字符串t中从第m个字符开始的全部字符复制到字符串s中，再输出字符串s。要求用字符指针定义并调用函数strmcpy(s,t,m)，它的功能是将字符串t中从第m个字符开始的全部字符复制到字符串s中。 
提示：输入字符串语句为  gets(s);
【运行时的输入输出样例】（下划线部分表示输入）
Input a string:happy new year
Input an integer:7
Output is:new year
*/
#include <stdio.h>
#include <string.h>
void strmcpy(char s[], char t[], int m);
int main()
{
	char s[102];
	char t[102];
	int m;
	printf("Input a string:");
	gets(t);
	printf("Input an integer:");
	scanf("%d", &m);
	strmcpy(s, t, m);
	printf("Output is:%s", s);
	return 0;
}
void strmcpy(char s[], char t[], int m)
{
	int i, j = 0;
	for (i = m - 1; i < strlen(t); i++)
		s[j++] = t[i];
	s[j] = '\0';
}
