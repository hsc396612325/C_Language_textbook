#include <stdio.h>
#include <string.h>
int main (void)
{
	int i=0,j=0;
	char s[80];
	gets(s);
	while(s[i]=='*')//寻找前导*的个数 
		i++;
	while(s[i])
		s[j++]=s[i++];//前移
	s[j]=0; 
	puts(s);
	
}