#include <stdio.h>
double max(double x,double y)
{
	if(x>y)
		return x;
	else 
		return y;
}
int main (void)
{
	double m,a[10]={12.3,155,123,12.2,44,3.2,54,66,22,12.3};
	int k;
	m=a[0];
	for(k=1;k<10;k++)
		m=max(m,a[k]);
	printf("%g\n",m);
	return 0;
}