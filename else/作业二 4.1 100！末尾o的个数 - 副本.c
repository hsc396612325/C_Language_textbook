#include <stdio.h>
int main(void)
{
	double i,num=1,sum=0;
	for(i=1;i<101;i++)
	{
		num*=i;
		printf("%g %g\n",i,num);	 
	}

} 