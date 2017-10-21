#include <stdio.h>
int fun(int m,int n)
{
	if(n>m-n)
		n=m-n;
	if(n==0)
		return 1;
	else if(n==1)
		return m;
	return fun(m-1,n-1)+fun(m-1,n);	
}
int main(void)
{
	int m,n;
	printf("请输入x和n的值：\n");
	scanf("%d%d",&m,&n);
	printf("在%d中选择%d个数一共有%d种可能性\n",m,n,fun(m,n));	
}