/*	
【问题描述】
在数组中查找指定元素。
输入一个正整数n(1<n<=10),然后输入n个整数存入数组a中，再输入一个整数x,在数组a中查找x，如果找到则输出相应的最小下标，否则输出Not found。
要求定义并在主函数中调用函数search(list,n,x)，它的功能是在数组list中查找元素x,若找到则返回相应的最小下标，否则返回-1。
定义函数（该函数有返回值，返回一个整数）：
int search(int list[],int n,int x)
{
     return  ...;
}
【运行时的输入输出样例1】（下划线部分表示输入）
Input n:3
Input 3 integers:1 2 -6
Input x:2
index=1
【运行时的输入输出样例2】（下划线部分表示输入）
Input n:5
Input 5 integers:1 2 2 5 4
Input x:0
Not found
*/
#include <stdio.h>
int search(int a[], int n, int x);
int main()
{
	int n, x, i, index;
	int a[10];
	printf("Input n:");
	scanf("%d", &n);
	printf("Input %d integers:", n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("Input x:");
	scanf("%d", &x);
	index = search(a, n, x);
	if (index == -1)
		printf("Not found\n");
	else
		printf("index=%d\n", index);
	return 0;
}
int search(int a[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == x)
			return i;
	return -1;
}
