#include <stdio.h>
#include <string.h>

void sort(char a[], int n)
{
    int i, j;
    char temp;
    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

int main()
{
    char a[21], b[21];
    int cnt = 0;
    scanf("%s", a);
    int n = strlen(a);
    int i, j = 0;
    for (i = 0; i < n; i++)
        if (a[i] == 'c')
            cnt++;
        else
            b[j++] = a[i];
    b[j] = '\0';
    if (cnt)
        printf("count:%d\n", cnt);
    else
        printf("No c\n");
    printf("b: %s\n", b);
    sort(b, strlen(b));
    printf("b sorted: %s\n", b);
    return 0;
}
