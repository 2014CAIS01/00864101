/*
【问题描述】
输入一个字符，再输入一个以回车结束的字符串(少于80 个字符)，在字符串中查找该字符｡
如果找到，则输出该字符在字符串中所对应的最大下标(下标从0 开始)；否则输出Not Found｡
提示：
（1）定义字符数组用来保存字符串，程序运行时从键盘输入一个字符串，以回车结束，将输入的字符串放入字符数组中，代码为：
    char  str[80];
    gets(str);
（2）还要定义一个字符变量,保存输入的一个字符，注意字符变量只能保存一个字符，回车也是一个字符。
    char  ch;
    ch=getchar();
（3）使用for循环对字符数组进行遍历，数组下标从0开始，注意for循环中的循环条件str[i]!='\0'
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        index=i;
    }
【输入形式】
输入一个字符和一个以回车结束的字符串
【输入输出样例1】（下划线部分表示输入）
Input a character: m
Input a string: programming
index=7
【输入输出样例2】（下划线部分表示输入）
Input a character: b
Input a string: 123xyz
Not Found
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    int i, index = -1;
    char  ch;
    char str[80];
    printf("Input a character: ");
    ch = getchar();
    getchar();
    printf("Input a string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        index = i;
    }
    if (index != -1)
        printf("index=%d", index);
    else
        printf("Not Found");
    return 0;
}
