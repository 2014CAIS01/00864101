/*
【问题描述】要求定义和调用函数dist(x1, y1, x2,y2)计算两点间的距离｡
给定平面任意两点坐标(x1,y1)和(x2,y2),求这两点之间的距离(保留2位小数)｡要求定义和调用函数dist(x1, y1, x2,y2)计算两点间的距离｡
提示：表示坐标及距离的变量是double型
【输入形式】
从键盘输入点坐标(x1,y1)
从键盘输入点坐标(x2,y2)
【输入输出样例1】（下划线部分表示输入）
Input(x1,y1): 35.5   48.6
Input(x2,y2): 210.7  104.5
distance=183.90
【样例说明】
输入提示符后要加一个空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
#include <math.h>
double dist(double x1, double y1, double x2, double y2);
int main()
{
    double x1, x2, y1, y2;
    printf("Input(x1,y1): ");
    scanf("%lf%lf", &x1, &y1);
    printf("Input(x2,y2): ");
    scanf("%lf%lf", &x2, &y2);
    printf("distance=%.2f", dist(x1, y1, x2,y2));
    return 0;
}
double dist(double x1, double y1, double x2, double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
