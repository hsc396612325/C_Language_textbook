#include <stdio.h>
#define PI 3.1415926

double c,area;

void f(double r)
{
	c=2*PI*r;
	area=PI*r*r;
}

int main(void)
{
	double r;
	printf("请输入园的半径：\n");
	scanf("%lf",&r);
	f(r);
	printf("周长为：%lf，面积为：%lf\n",c,area);
	return 0;
}