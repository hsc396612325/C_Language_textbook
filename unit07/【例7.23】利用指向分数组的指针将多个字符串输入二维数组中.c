#include <stdio.h>
int main(void)
{
	char str[5][20];
	char (*p)[20];
	printf("请输入5串字符串：\n");
	for(p=str;p<str+5;p++)
		scanf("%s",p);
	printf("你输入的是：\n");
	for(p=str;p<str+5;p++)
		printf("%s ",p);
	return 0;
}