#include <stdio.h>
int main(int argc, char *argv[])
{
	int N,i;
	double sum=0;
	printf("请输入n值:");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		sum+=i;
	}
	printf("前N项和为%g\n",sum); 
	return 0;
}