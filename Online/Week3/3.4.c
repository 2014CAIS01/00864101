/*
【问题描述】
输入10 个字符,统计其中英文字母、空格或回车、数字字符和其他字符的个数。
提示：使用for循环语句，每循环1次读入一个字符，然后对字符进行判断、统计。
【输入形式】
从键盘输入字符。
【输入输出样例1】（下划线部分表示输入）
Input 10 characters: Reold 123?
letter=5, blank=1, digit=3, other=1
【样例说明】
输入提示符后要加一个空格。
输出语句的=两边无空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
int main()
{
    char ch;
    int i, letter = 0, blank = 0, digit = 0, other = 0;
    printf("Input 10 characters: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%c", &ch);
        if (ch >= 'a' && ch <='z' || ch >= 'A' && ch <= 'Z')
            letter++;
        else if (ch == ' ')
            blank++;
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
            other++;
    }
    printf("letter=%d,blank=%d,digit=%d,other=%d", letter, blank, digit, other);
    return 0;
}
