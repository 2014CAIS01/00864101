#include <stdio.h>

const int INF = 0x3f3f3f3f;

int main()
{
    int n;
    int num;
    int min = INF;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &num);
        min = (num < min ? num : min);
    }
    printf("%d", min);
    return 0;
}
