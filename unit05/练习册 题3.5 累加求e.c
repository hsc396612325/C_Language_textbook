#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	double n=1,e=1;
	for(i=1;n>1e-7;i++)
	{
		n=1;
		for(j=1;j<i+1;j++)
			n=n*1.0/j;
		e+=n;
	}
	printf("e=%lf\n",e);
	return 0;
}