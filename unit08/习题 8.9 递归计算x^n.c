#include <stdio.h>
int	pow(int x,int n)
{
	int sum=1;
	if(n==0)
		return 1;
	sum=x*pow(x,n-1);
	return sum;	
}
int main(void)
{
	int x,n; 
	printf("请分别输入底数和指数：\n");
	scanf("%d%d",&x,&n);
	printf("%d^%d=%d",x,n,pow(x,n));	
}