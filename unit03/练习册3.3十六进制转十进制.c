#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,k;
	printf("请输入一个十六进制的数");
	k=scanf("%x",&a);
	if(k!=0)
	printf("将其转化十进制为%d\n",a); 
	else
	printf("输入错误\n");
	return 0;
}