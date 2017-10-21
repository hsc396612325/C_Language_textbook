#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b;
	printf("请输入一个整数\n");
	scanf("%d",&a);
	do{
		b=a%10;
		printf("%-2d",b);
		a=a/10;
	}
	while(a!=0);
	return 0;
}