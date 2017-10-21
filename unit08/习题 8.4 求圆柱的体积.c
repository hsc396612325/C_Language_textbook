#include <stdio.h>
#define PI 3.145926
double f1(int r,int h)
{
	return PI*r*r*h;
}
int main (void)
{
	int r,R,h;
	printf("请输入该圆筒的半径，外径，高:\n");
	scanf("%d%d%d",&r,&R,&h); 
	printf("体积为：%lf\n",f1(R,h)-f1(r,h));
}