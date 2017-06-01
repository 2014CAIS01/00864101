#include <stdio.h>
#include <string.h>

int main()
{
    char s[12];
    gets(s);
    int i, num = 0;
    int len = strlen(s);
    for (i = 0; i < len; i++)
        if (s[i] >= '0' && s[i] <= '9')
            num = num * 10 + s[i] - '0';
    printf("digit=%d", num);
    return 0;
}
