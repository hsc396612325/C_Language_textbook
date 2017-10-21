#include <stdio.h>
int	E_i(int n)
{
	int sum=1;
	if(n==0)
		return 0;
	sum=n+E_i(n-1);
	return sum;	
}
int main(void)
{
	int n; 
	printf("请一个整数：\n");
	scanf("%d",&n);
	printf("1+2+~~+%d=%d",n,E_i(n));	
}