#include <stdio.h>
#define PI 3.1415926

double a(double r)
{
	return(PI*r*r);
}
int main (void)
{
	double r;
	printf("ÇëÊäÈëÔ²µÄ°ë¾¶£º\n");
	scanf("%lf",&r);
	printf("area=%lf\n",a(r));
}