#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,t=1;
	double sum=1;
	for(i=2;i<101;i++)
	{
		sum=sum+1.0/i*t;
		t=-t;
	}
	printf("1-1/2+1/3-1/4¡¤¡¤¡¤-1/100=%lf\n",sum);
	return 0;
}