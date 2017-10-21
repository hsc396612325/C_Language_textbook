#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	double sin=0,num,x,k=1;
	scanf("%lf",&x);
	num=x;
	for(i=1;num>1e-7;i++)
	{
		num=x;
		for(j=1;j<2*i-1;j+=2)
			{
			num=num*(x*x)/((j+1)*(j+2));
			}
		sin=sin+k*num;
		k=-k;
	}
	printf("%lf,%d\n",sin,i);
	return 0;
}