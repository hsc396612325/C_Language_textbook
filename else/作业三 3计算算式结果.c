#include <stdio.h>
int main(void)
{
	int i,n=1;
	double x,m=1,sum=0;
	printf("ÇëÄãÊäÈëxµÄÖµ£º\n");
	scanf("%lf",&x);
	for(i=1;i<6;i++)
	{
		n=n*i;
		printf("n=%d\n",n);
		m=m*x;
		printf("m=%lf\n",m);
		sum=sum+m/n; 
		printf("sum=%lf\n",sum);
	}
}