/*
【问题描述】
输入一个以回车结束的字符串(少于80 个字符)，统计并输出其中大写辅音字母的个数(大写辅音字母：除A､E､I､O､U 以外的大写字母)｡
【输入形式】
输入一个以回车结束的字符串
【输入输出样例1】（下划线部分表示输入）
Input a string:  HELLO
count=3
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    char str[80];
    printf("Input a string: ");
    gets(str);
    int i, count = 0;
    for(i = 0; str[i] != '\0'; i++)
        if(str[i] >='B' && str[i] <= 'Z' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U')
            count++;
    printf("count=%d", count);
    return 0;
}
