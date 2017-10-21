#include <stdio.h>

int main(void)
{
	int x;
	printf("请输入一个数：\n");
	scanf("%d",&x);
	while(x)
	{
		printf("%d\n",x%10);
		x/=10;
	}
	 
}