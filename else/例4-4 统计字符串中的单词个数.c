#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,num=0;
	char s[80];
	printf("请输入一串字符串：\n");
	gets(s);
	for(i=0;s[i];i++)
		if(s[i]!=' '&&(s[i+1]==' '||s[i+1]==0))//重点！当前不为空格，下一个为回车或者空格 
			num++;
	printf("一共%d个单词\n",num);
}