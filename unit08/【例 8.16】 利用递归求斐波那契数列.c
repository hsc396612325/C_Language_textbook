#include <stdio.h>
int f(int n)
{
	int s;
	if(n==1||n==2)
		return 1;
	s=f(n-1)+f(n-2);
	return s;
}
int main(void)
{
	int n;
	printf("你输入项数：\n");
	scanf("%d",&n);
	printf("斐波那契数列%d项为%d\n",n,f(n)); 
	return 0;
}