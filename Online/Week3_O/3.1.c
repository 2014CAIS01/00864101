/*
【问题描述】
判断输入的某个数是否为素数。若是，输出YES，否则输出NO。
【输入形式】一个数
【输出形式】YES 或者 NO
【样例输入】2
【样例输出】YES
*/
#include <stdio.h>
int main()
{
	int i, num;
	scanf("%d", &num);
	for (i = 2;i < num; i++)
	{
		if (num % i == 0)
			break;
	}
	if (num == i)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
