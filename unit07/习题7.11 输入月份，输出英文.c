#include <stdio.h>

int main(void)
{
	char str1[6][20]={"January","February","March","April","May","June "};
	char str2[6][20]={"July","August","September","October ","November","December"};
	int month;
	printf("请输入月份：\n");
	scanf("%d",&month);
	if(month>0&&month<7)
		printf("%s\n",str1[month-1]);
	if(month>6&&month<13)
		printf("%s\n",str2[month-7]);
	if(month<1||month>12)
		printf("输入有误！\n");
}