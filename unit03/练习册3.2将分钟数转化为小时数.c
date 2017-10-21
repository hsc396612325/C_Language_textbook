#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c;
	printf("请输入分钟数");
	scanf("%d",&a);
	b=a/60;
	c=a%60;
    printf("%d小时%d分钟\n",b,c);
	return 0;
}