#include <stdio.h>
void main(void)
{
	int x,y,t;
	printf("请输入两个整数：\n");
	scanf("%d%d",&x,&y);
	t=x;
	x=y;
	y=t;
	printf("%d %d\n",x,y);
}