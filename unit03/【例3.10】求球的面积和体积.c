#include <stdio.h>
#define PI 3.1415926
int main(int argc, char *argv[])
{
	float r;
	printf("请输入球的半径");
	scanf("%f",&r);
	printf("面积=%g，体积=%g\n",4*PI*r*r,1.33*PI*r*r*r);
	return 0;
}