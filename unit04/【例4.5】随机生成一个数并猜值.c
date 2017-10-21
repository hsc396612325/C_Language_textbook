#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
	int a,b;
	srand((unsigned)time(NULL));/*做随机数产生种子*/ 
	a=rand()%5+1;			/*产生1·5范围内的随机数*/ 
	printf("请输入你要猜的数\n");
	scanf("%d",&b);
	if(a==b)printf("恭喜你猜对了\n");
	else    printf("抱歉你猜错了\n"); 
	return 0;
}