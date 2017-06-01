#include <stdio.h>

void sort(int a[], int n)
{
    int i, j;
    int temp;
    for (i = 1; i < n; i++)
        for (j = 0; j < n - i; j++)
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
}

int main()
{
    int a[10];
    int i;
    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    sort(a, 10);
    for (i = 0; i < 10; i++)
        printf("%d ",a[i]);
    return 0;
}
