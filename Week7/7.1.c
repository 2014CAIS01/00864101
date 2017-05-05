/*
【问题描述】 
有n个整数，使其中所有整数顺序向右（向后）循环移动m个位置(m<n)。
编写一个函数实现以上功能，在主函数中输入n个整数并输出调整后的n个整数。
提示：  参考教材 P122 中的例子。
#include<stdio.h>
void move(int a[], int n, int m);     //函数声明
int main(void)
{
    int  a[100];
    int  i,n,m;
    ..........
       move(a,n,m);           // a是数组名，在主函数main()中调用了move()函数后，改变了数组a中数组元素的值。                                                                        
    ............
    return   0;
}
 
void move(int a[], int n,int m)      //函数定义
{
	int i, j, temp;
	for(i=1;i<=m;i++)
    {
         .................
	}
 
}
【输入形式】
首先输出"Input n,m:"；在冒号后面输入数据正整数n，表示共有n个整数；空一格；输入m，表示顺序向右（向后）循环移动m个位置；回车。
连续输入n个整数，每个数值之间用空格隔开；回车；
【输出形式】
%5d格式输出整数。
【输入样例】（下划线部分表示输入，无下划线部分表示输入前的提示）
Input n,m:5 3
 1 2 3 4 5
【输出样例】
After move:    3    4    5    1    2
*/
#include <stdio.h>
void move(int a[], int n, int m);
int main()
{
	int a[100];
	int i, n, m;
	printf("Input n,m:");
	scanf("%d%d", &n, &m);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	move(a, n, m);
	printf("After move:");
	for (i = 0; i < n; i++)
		printf("%5d", a[i]);
	printf("\n");
	return 0;
}
void move(int a[], int n, int m)
{
	int i, j, temp;
	for (i = 0; i < m; i++)
	{
		temp = a[n - 1];
		for (j = n - 1; j > 0; j--)
			a[j] = a[j - 1];
		a[0] = temp;
	}
}
