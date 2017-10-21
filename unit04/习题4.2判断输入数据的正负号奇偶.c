#include <stdio.h>
int main(void)
{
	int a;
	printf("请输入一个整数\n");
	scanf("%d",&a);
	if(a>0)
		printf("正数  ");
	else if (a==0)
		printf("零  ");
	else
		printf("负数  ");
	if(a%2==0)
		printf("偶数\n"); 
	else
		printf("奇数\n");
	return 0;
}