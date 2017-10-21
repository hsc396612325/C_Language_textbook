#include <stdio.h>
int prime(int n)
{
	int i;
	for(i=2;n%i;i++);
	if(i==n)
		return 1;
	return 0;
}
void f1(int n)
{
	int i=2;
	while(i<=n)
	{
		if(n%i==0&&prime(i))
		{
			printf("%d ",i);
			n=n/i;
			i--;	
		}
		i++;
	}					
}
int main(void)
{
	int n;
	printf("请输入一个整数：\n");
	scanf("%d",&n); 
	f1(n);
}