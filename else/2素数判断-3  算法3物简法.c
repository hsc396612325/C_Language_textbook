#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,i;
	printf("请输入一个整数：");
	scanf("%d",&n);
	for(i=2;n%i;i++)
	;
	if(n==i)
		printf("yes\n");
	else
		printf("no\n"); 
	return 0;
}