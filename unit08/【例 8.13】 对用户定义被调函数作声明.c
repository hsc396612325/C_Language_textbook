#include <stdio.h>

int main(void)
{
	double add(double x,double y);
	double a,b,c;
	scanf("%lf%lf",&a,&b);
	c=add(a,b);
	printf("sum=%g\n",c);
}
double add(double x,double y)
{
	return (x+y);
}