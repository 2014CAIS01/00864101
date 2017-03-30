#include <stdio.h>

int main()
{
    char ch1, ch2;
    scanf("%c%c", &ch1, &ch2);
    putchar(ch1 + 32);
    printf("%c\n", ch2 + 32);
    return 0;
}
