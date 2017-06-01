#include <stdio.h>
#include <math.h>

int isp(int n)
{
    int i;
    if (n == 1)
        return 0;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int m, n, sum = 0, cnt = 0;
    int i;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++)
        if (isp(i))
            cnt++, sum += i;
    printf("%d %d", cnt, sum);
    return 0;
}
