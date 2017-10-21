#include <stdio.h>
#include <math.h>
#define jd(x)(3.1415926*(x)/180.0)

int main (void)
{
	double a[91],b[46];
	int i;
	for(i=0;i<46;i++)
	{
		a[i]=sin(jd(i));
		b[i]=tan(jd(i));
	}
	for(i=46;i<91;i++)
		a[i]=sin(jd(i));
	
	for(i=0;i<91;i+=5)
		printf("sin(%d)=%g\n",i,a[i]);
	for(i=0;i<46;i+=5)
		printf("tan(%d)=%g\n",i,b[i]);
	return 0;
}