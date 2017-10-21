#include <stdio.h>
int fac(int x,int n)
{
	int num=0;
	if(n==0)
		return 1;
	if(n==1)
		return x;
	num=x*fac(x,n-1);
	return num;
}

int main (void)
{
	int x,n;
	printf("请输入底数和指数：\n");
	scanf("%d%d",&x,&n);
	printf("%d^%d=%d\n",x,n,fac(x,n));
}