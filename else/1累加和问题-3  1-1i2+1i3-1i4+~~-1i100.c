#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,t=1;
	double sum=0;
	for(i=1;i<101;i++)
	{
		sum=sum+1.0/i*t;   /*t=1；n*t；t=-t；负号正号问题相间算法*/ 
		t=-t;
	}
	printf("1-1/2+1/3-1/4···-1/100=%lf\n",sum);
	return 0;
}