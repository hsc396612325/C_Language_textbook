#include <stdio.h>
#include <math.h>
#define PI 3.1415926
double area(double r);
double area_ring(double x,double y);
double area_ring(double x,double y)
{
	double c;
	c=fabs(area(x)-area(y));
	return c;
}
double area(double r)
{
	return (PI*r*r);
}
void main()
{
	double r,r1;
	scanf("%lf %lf",&r,&r1);
	printf("area_ring=%g\n",area_ring(r1,r));
	return 0;
}