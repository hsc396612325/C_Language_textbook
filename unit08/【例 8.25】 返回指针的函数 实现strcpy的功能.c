#include <stdio.h>
char *strcpy(char *sl,char *s2)
{
	char *p=sl;//指针p保存传送实参的首地址 
	while(*sl++=*s2++);//赋值语句值为赋值结果 
	return p;//返回实参首地址 
}
void main()
{
	char s[20];
	printf("%s\n",strcpy(s,"welcom to you!"));
}