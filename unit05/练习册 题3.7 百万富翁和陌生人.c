#include <stdio.h>
int main (void)
{
	int i,j;
	double x=1,sum=0;
	for(i=0;i<30;i++)
	{	
		sum+=x;	
		x*=2; 	
	} 
	printf("富翁给陌生人%lf万元,陌生人给富翁%d万元\n",sum/1000000,30*10);
}