/*
【问题描述】
验证哥德巴赫猜想：任何一个大于6的偶数均可表示为两个素数之和｡例如，6=3+3   8=3+5 要求将6~100之间的偶数都表示为两个素数之和，输出时一行输出五组｡
 6= 3+  3	 8= 3+ 5	10= 3 + 7	12= 5+ 7	14= 3+ 11
16= 3+ 13	18= 5+13  
【输入形式】
无输入
【输出形式】
按从小到大、每行五组输出。
每组输出的格式为：%4d=%2d+%2d
等号和加号两侧无空格。
*/
#include <stdio.h>
int prime(int n);
int main()
{
	int i, j, n, c = 0;
	for (i = 6; i <= 100; i += 2)
		for (j = 2; j <= i; j++)
			if (prime(j))
				if (prime(n = i - j))
				{
					printf("%4d=%2d+%2d", i, j, n);
					c++;
					if (c % 5 == 0)
						printf("\n");
					break;
				}
	return 0;
}
int prime(int n)
{
	int i;
	for (i = 2; i * i <= n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
