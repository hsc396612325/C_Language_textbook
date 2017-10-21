#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	double e=1,sum=1;
	for(i=1;sum>1.0e-7;i++)
	{
		sum=1;
		for(j=1;j<=i;j++)
			sum*=1.0/j;
		e+=sum;
	}
	printf("e=%lf\n",e);
	return 0;
}