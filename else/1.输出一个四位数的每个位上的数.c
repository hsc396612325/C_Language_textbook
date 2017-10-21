#include <stdio.h>
int main(int argc, char *argv[])
{
	int a;
	printf("%请输入一个四位数：\n");
	scanf("%d",&a);
	printf("千位=%d\n",a/1000);
	printf("百位=%d\n",a/100%10);
	printf("十位=%d\n",a/10%10);
	printf("个位=%d\n",a%10);
	printf("后三位=%d\n",a%1000);
	return 0;
}