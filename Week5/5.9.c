/*
【问题描述】
输入一个以回车结束的字符串(少于80 个字符)，将其中的大写字母用下面列出的对应大写字母替换，其余字符不变,输出替换后的字符串｡
原字母 对应字母
A     Z
B     Y
C     X
D     W
……
X     C
Y     B
Z     A
【输入形式】
输入一个以回车结束的字符串
【输入输出样例1】（下划线部分表示输入）
Input a string:  A flag of USA
After replaced: Z flag of FHZ
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
    int i;
    for(i = 0; str[i] != '\0'; i++)
        if(str[i] >='A' && str[i] <= 'Z')
            str[i]='A'+'Z'-str[i];
    printf("After replaced: %s", str);
    return 0;
}
