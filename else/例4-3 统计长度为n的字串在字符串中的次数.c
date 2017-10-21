#include <stdio.h>
#include <string.h>

int main (void)
{
	char str[80];
	char s[4];
	int i,num=0;
	printf("请输入字符串：\n");
	gets(str);
	printf("请输入需要查询的字符串：\n");
	gets(s);
	for(i=0;str[i];i++)
		if(str[i]==s[0]&&str[i+1]==s[1])
		{
			num++;
			i++;//防止连续！！！ 
		}
	printf("出现%d次\n",num); 
}