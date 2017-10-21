#include <stdio.h>
#define N 10
int main(int argc, char *argv[])
{
	int f[N]={0};
	int i,j;
	for(i=0;i<N;i++)scanf("%d",&f[i]);
	j=0;
	for(i=0;i<N;i++)
	{
		if(f[i]<f[j]) j=i;
		/*if(f[i]<f[i+1])
		min=f[i];*´íÎó!*/ 
	}
	printf("%d\n",f[j]);
	return 0;
}