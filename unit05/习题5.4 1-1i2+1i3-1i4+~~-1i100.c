#include <stdio.h>
int main(void)
{
	int i,t=1;
	double sum=0;
	for(i=1;i<101;i++)
	{
		sum=sum+1.0/i*t;  
		t=-t;
	}
	printf("1-1/2+1/3-1/4¡¤¡¤¡¤-1/100=%lf\n",sum);
	return 0;
}