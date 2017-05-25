#include <stdio.h>

int digsum(int n)
{
    int ans = 0;
    do
        ans += n % 10;
    while (n /= 10);
    return ans;
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    int i, sum = 0;
    for (i = m; i <= n; i++)
        if (i % 5 == 0 && digsum(i) == 5)
            sum += i;
    if (sum)
        printf("%d", sum);
    else
        printf("No Data");
    return 0;
}
