#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j;
	char s[80];
	printf("请输字符串：\n");
	gets(s);
	i=strlen(s)-1;
	j=0;
	while(j<i)
	{
		if(s[i]!=s[j])
			break;
		i--;
		j++; 
	} 
	if(j>=i)
		printf("是回文。\n");
	else 
		printf("不是回文。\n");
}