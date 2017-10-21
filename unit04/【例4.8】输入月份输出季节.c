#include <stdio.h>
int main(int argc, char *argv[])
{
	int x;
	printf("请输入月份：");
	scanf("%d",&x);
	if(x>=2&&x<=4)
		printf("现在是春季！\n");
	else if(x>=5&&x<=7)
		printf("现在是夏季！\n");
	else if(x>=8&&x<=10)
		printf("现在是秋季！\n");
	else if(x==11||x==12||x==1)
		printf("现在是冬季！\n");
	else
		printf("输入有误！\n"); 
	return 0;
}