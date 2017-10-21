#include <stdio.h>
int fac(int n)
{
	int f;
	if(n==0) 
		return 1;
	f=fac(n-1)*n;
		return f;
}
//递归：必须有递归体和递归出口 
int main(void)
{
	int n;
	printf("请输入一个数：\n");
	scanf("%d",&n);
	printf("n!=%d\n",fac(n));
}