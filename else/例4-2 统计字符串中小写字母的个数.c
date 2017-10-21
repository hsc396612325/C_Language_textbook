#include <string.h>
#include <stdio.h>

int main(void)
{
	int a[26]={0},i;
	char s[80];
	gets(s);
	for(i=0;s[i];i++)
		a[s[i]-'a']++;
	for(i=0;i<26;i++)
		printf("%cÓÐ%d¸ö\t",i+'a',a[i]);
}