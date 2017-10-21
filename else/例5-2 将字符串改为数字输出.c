#include <stdio.h>
#include <string.h>
int main (void)
{
	char s[10];
	int i=0,n=0,j=1;
	printf("请输入一个数字:\n");
	gets(s);
	if(s[i]=='-')//判断正反 
	{
		i++;
		j=-j;
	} 
	while(s[i])//字符转数字 
	{
		n=n*10+s[i]-'0';
		i++;	
	}
	printf("%d\n",n*j);
}