#include <stdio.h>
#define N 30
int main(void)
{
	int n,i,sum=0,av;
	int k=0,a[N],t;
	for(i=0;n>0;i++)
	{
		scanf("%d",&n);
		if(n>0&&n<=100)
		{
			sum+=n;
			if(n<60)
			{
		 	 a[k]=n;
		 	 k++;
			}
		}
	}
	for(t=0;t<k;t++)
		printf("%d ",a[t]);
	printf("\n");
	printf("%g\n",(double)sum/i);
	return 0;
}