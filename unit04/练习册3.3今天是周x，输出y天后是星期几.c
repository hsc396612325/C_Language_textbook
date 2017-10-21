#include <stdio.h>
int main(int argc, char *argv[])
{
	int day,sun,x;
	printf("输入今天是星期几：\n");
	scanf("%d",&day);
	printf("想看多少天后是星期几：\n");
	scanf("%d",&sun);
	x=(day+(sun%7))%7;
	if(x==0)printf("%d天后是星期日\n",sun);
	else     printf("%d天后是星期%d\n",sun,x);
	return 0;
}