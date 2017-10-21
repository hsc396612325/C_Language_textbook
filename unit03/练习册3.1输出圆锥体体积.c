#include <stdio.h>
#define PI 3.1415926
int main(int argc, char *argv[])
{
	float r,h;
	printf("请输入圆锥的底面圆半径和高");
	scanf("%f%f",&r,&h);
	printf("体积=%g\n",PI*r*r*h/3);
	return 0;
}