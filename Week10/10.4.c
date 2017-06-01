#include <stdio.h>

int dig(int n, int a[])
{
    int i = 0;
    do
        a[i++] = n % 10;
    while (n /= 10);
    return i;
}

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

int comp(int a[], int n)
{
    int i, ans = 0;
    for (i = 0; i < n; i++)
        ans = ans * 10 + a[i];
    return ans;
}

int main()
{
    int num, i;
    scanf("%d", &num);
    int sum = num + 789;
    int a[6];
    int n = dig(sum, a);
    sort(a, n);
    int max = comp(a, n);
    printf("%d %d", max, n);
    return 0;
}
