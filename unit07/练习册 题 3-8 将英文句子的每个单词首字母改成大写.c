#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100];
	int i;
	printf("请输入一段英文句子：\n");
	gets(str);
	for(i=0;str[i+1];i++)
	{
		if(i==0&&str[0]!=' ')
			str[i]-=32;
		else if(str[i]==' '&&str[i+1]!=' ')
			str[i+1]-=32;
	}
	str[i]=0;
	puts(str);
}