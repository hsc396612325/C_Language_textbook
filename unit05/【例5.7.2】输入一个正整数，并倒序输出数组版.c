#include <stdio.h>
#define N 10
int main(int argc, char *argv[])
{
	int a,i,j,f[N]={0};
	while(scanf("%d",&a)!=EOF)
	{
		for(i=0;a!=0;i++)
			{
			f[i]=a%10;
			a=a/10;
			}
		for(j=0;j<=i-1;j++) printf("%d ",f[j]);
	}
	return 0;
}