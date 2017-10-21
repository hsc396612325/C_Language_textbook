#include <stdio.h>
#include <string.h>
int main (void)
{
	int i=0,n,j=0;
	char s[80];
	printf("请输入字符串：\n");
	gets(s); 
	printf("请输入保留*号个数：\n");
	scanf("%d",&n);
	i=strlen(s)-1;
	while(s[i]=='*')//计算后导*个数 
		i--;
	if(strlen(s)-i>n)//插入结束 
		s[n+i+1]=0;
	puts(s);
}