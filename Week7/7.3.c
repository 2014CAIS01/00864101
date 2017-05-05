/*
【问题描述】
定义函数void sort(int a[],int n),用冒泡排序算法对数组a中的整数升序排列。
在主函数main中输入n个整数（<1<n<=20）,调用sort函数对n个整数排序，并将排序后的整数输出。
冒泡排序可参考教材： P85
【运行时的输入输出样例】（下划线部分表示输入）
Input n:6
Input array of 6 integers:1 5 -9 2 4 -6
After sorted the array is:-9 -6 1 2 4 5
*/
#include <stdio.h>
void sort(int a[], int n);
int main()
{
	int n, i;
	int a[20];
	printf("Input n:");
	scanf("%d", &n);
	printf("Input array of %d integers:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, n);
	printf("After sorted the array is:");
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
	return 0;
}
void sort(int a[], int n)
{
	int i, j, temp;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
}
