#include <stdio.h>
int main(int argc, char *argv[])
{
	int k,a,leap=0;
	printf("请输入一个年份\n");
	while(k=scanf("%d",&a)!=EOF)
	{
		if(a%4==0&&a&100!=0||a%400==0)leap=1 ;
		if(leap)	
			printf("闰年\n");
		else
			printf("平年\n"); 
	printf("可以继续输入\n"); 
	} 
	
	return 0;
}