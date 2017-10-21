#include <stdio.h>
#define N 10
int main(int argc, char *argv[])
{
	int i,sum=0,f[N]={0};
	for(i=0;i<N;i++)scanf("%d",&f[i]);
	for(i=0;i<N;i++)sum+=f[i];
	printf("平均数为：%d",sum/N);
	return 0;
}