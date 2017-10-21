#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,max;
	printf("请输入两个整数");
	scanf("%d %d",&max,&a);
	if(a>max)max=a;
	printf("较大值为：%d\n",max); 
	return 0;
}