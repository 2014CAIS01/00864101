/*
【问题描述】编写程序，从键盘输入n(n<10)本书的名称和定价并存入结构数组中，
从中查找定价最高和最低的书的名称和定价，并输出。
提示：（1）定义结构类型   
（2）定义结构数组   
【输入形式】先输入书本数n（整型，n<10），再依次输入每本书的名称（字符串,字符数组）和定价（实型double）。
【输入输出样例】（下划线部分表示输入）
Input n:3
Input the name,price of the 1 book:C 21.5
Input the name,price of the 2 book:VB 18.5
Input the name,price of the 3 book:Delphi 25.0
The book with the max price:Delphi,25.0
The book with the min price:VB,18.5
【样例说明】
输出价格最高的书的名称和定价，再输出价格最低的书的名称和定价，格式为
The book with the max price:%s,%.1f
The book with the min price:%s,%.1f
标点符号全部为英文:
*/
#include <stdio.h>
struct book
{
	char name[10];
	double price;
};
int main()
{
	int i, n;
	struct book b[10], max, min;
	min.price = 0x7fffffff, max.price = 0;
	printf("Input n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Input the name,price of the %d book:", i + 1);
		scanf("%s%lf", b[i].name, &b[i].price);
		if (b[i].price > max.price)
			max = b[i];

		else if (b[i].price < min.price)
			min = b[i];
	}
	printf("The book with the max price:%s,%.1f\n", max.name, max.price);
	printf("The book with the min price:%s,%.1f\n", min.name, min.price);
	return 0;
}
