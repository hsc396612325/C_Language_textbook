#include <stdio.h>

int main (void)
{
	int x,num=0,m;
	printf("请输入一个数：\n");
	scanf("%d",&x);
	m=x;
	while(x)
	{
		num+=x%2;
		x/=2;
	}
	printf("%d的二进制中有%d个1",m,num);
	return 0;
}