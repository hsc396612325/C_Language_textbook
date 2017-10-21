#include <stdio.h>
#include <string.h>
int main (void)
{
	int i=0,j=0,n;
	char s[80];
	printf("请输入字符串：\n");
	gets(s); 
	printf("请输入保留*号个数：\n");
	scanf("%d",&n);
	while(s[i]=='*')//统计前导*个数 
		i++;
	if(i>n)
	{
		for(i=i-n;s[i];i++)//前移 
			s[j++]=s[i];
		s[j]=0;		
	}
	
	puts(s);
}