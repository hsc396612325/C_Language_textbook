#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[80];
	int i,j=0;
	gets(s);
	for(i=0;s[i];i++)
		if(s[i]!='*')
			s[j++]=s[i];
	s[j]=0;
	puts(s);
	
}