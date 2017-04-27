/*
【问题描述】
输入三角形的三边a,b,c，如果能构成一个三角形，输出面积area
和周长perimeter（保留两位小数）；否则，输出
&ldquo;These sides do not correspond to a valid triangle&rdquo;
在一个三角形中，任意两边之和大于第三边。三角形面积计算公式：
area=sqrt(s*(s-a)*(s-b)*(s-c))
其中：s=(a+b+c)/2
提示：将三角形的三边a,b,c定义为double类型的变量，从键盘输入3条边（调用scanf()函数），
使用if 语句判断输入的3条边是否构成三角形，如果是三角形，求面积、周长并输出。
【输入形式】
输入三角形的三条边的数据。
【输入输出样例1】（下划线部分表示输入）
Enter 3 sides of the triangle: 5 5 3
area =7.15;perimeter =13.00
【样例说明】
输入提示符后要加一个空格。
输出语句的=两边无空格。
英文字母区分大小写。必须严格按样例输入输出。
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, s, area;
    printf("Enter 3 sides of the triangle: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a + b > c && b + c > a && c + a > b)
    {
        s = (a + b + c) / 2;
        area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("area=%.2f;perimeter=%.2f", area, a + b + c);
    } else
        printf("&ldquo;These sides do not correspond to a valid triangle&rdquo;");
    return 0;
}
