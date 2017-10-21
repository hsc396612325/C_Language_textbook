#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,n,t=0;
	printf("请输入一个整数：");
	scanf("%d",&m);
	for(n=m;n>0;n/=10)
		t=t*10+n%10;
	if(t==m)
		printf("yes\n");
	else
		printf("no\n"); 
	return 0;
} 