#include <stdio.h>
char *strcat(char *s1,char *s2)
{
	char *p=s1;//p保存传递的首地址
	while(*s1) s1++;//将sl移向\0处 
	while(*s1++=*s2++);//将s2直线的值赋给s1,直到s2指向\0 
	return p;
		
}
int main (void)
{
	char s[40]="hello,";
	printf("%s\n",strcat(s,"welocom to you!"));
}