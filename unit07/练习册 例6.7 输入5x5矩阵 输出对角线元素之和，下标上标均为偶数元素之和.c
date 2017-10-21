#include <stdio.h>
#define N 5 
int main (void)
{
	int a[N][N];
	int i,j,sum1=0,sum2=0;
	printf("ÊäÈë5x5¾ØÕó£º\n");
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
		{
			if(i==j||(i+j)==(N-1))
				sum1+=a[i][j];
			if(i==j||(i+j)==(N-1)&&i%2==0&&j%2==0)
				sum2+=a[i][j];
		} 
	printf("sum1=%d,sum2=%d\n",sum1,sum2);
	return 0;
}