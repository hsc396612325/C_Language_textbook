#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
	int a,b,c=0;
	srand((unsigned)time(NULL));/*做随机数产生种子*/ 
	a=rand()%10000+5000;			
	printf("请输入你猜的数\n");
	scanf("%d",&b);
	while(b!=a)
	{
	if(b>a)printf("过大\n");
	else    printf("过小\n");
	printf("请继续输入你要猜的数\n");
	scanf("%d",&b); 
	c++;
	}
	printf("恭喜你用了%d次猜对了,答案为%d\n",c,a); 
	return 0;
}