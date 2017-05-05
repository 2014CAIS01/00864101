/*
【问题描述】
删除字符串中的字符。输入一个字符串s，再输入一个字符c，将字符串s中出现的所有字符c删除。要求定义并调用函数delchar(s,c)，它的功能是将字符串s中出现的所有c字符删除。 
提示：因为字符串中可以包含空格，因此输入字符串语句为 gets(s);
定义函数
  void  delchar(char  s[], char c)
{
 
}

【运行时的输入输出样例】（下划线部分表示输入）
Input a string:happy new year
Input a char:a
After deleted,the string is:hppy new yer
*/
#include <stdio.h>
#include <string.h>
void delchar(char s[], char c);
int main()
{
	char s[100];
	char c;
	printf("Input a string:");
	gets(s);
	printf("Input a char:");
	scanf("%c", &c);
	delchar(s, c);
	return 0;
}
void delchar(char s[], char c)
{
	printf("After deleted,the string is:");
	int i;
	for (i = 0; i < strlen(s); i++)
		if (s[i] != c)
			printf("%c", s[i]);
}
