#include <stdio.h>

int leep(int year)
{
    if (year % 4 == 0 && year % 100)
        return 1;
    if (year % 400 == 0)
        return 1;
    return 0;
}

int main()
{
    int year, month, day;
    int d[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d%d%d", &year, &month, &day);
    int i;
    for (i = 12; i > 0; i--)
    {
        if (month > i)
            day += d[i - 1];
    }
    if (month > 2)
        day += leep(year);
    printf("%d", day);
    return 0;
}
