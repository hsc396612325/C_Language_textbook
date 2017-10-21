#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,k;
	printf("请输入一个整数\n");
	while(k=scanf("%d",&a)!=EOF)
	{
		if(a%2==0)printf("偶数\n");
		else printf("奇数\n");
		printf("可以继续输入一个整数\n"); 
	}
	return 0;
}