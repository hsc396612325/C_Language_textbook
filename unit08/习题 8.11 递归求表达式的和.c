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
	int x,n,sum=0,i,k=1; 
	printf("请分别输入x和n的值：\n");
	scanf("%d%d",&x,&n);
	for(i=1;i<=n;i++,k*=-1)
		sum+=k*pow(x,n);
	printf("x-x^2+x^3-x^4+~~+(-1)^(n-1)*x^n=%d\n",sum);	
}