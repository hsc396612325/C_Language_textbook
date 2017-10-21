#include <stdio.h>
#include <string.h>
int main (void)
{
	int i=0;
	char str[]="he shu cheng";
	for(i=0;str[i]!=0;i++)
		if(str[i]=='e')
			printf("一次\n");
	for(i=0;str[i];i++)
		if(str[i]=='e')
			printf("一次\n");
	for(i=0;i<strlen(str);i++)
		if(str[i]=='e')
			printf("一次\n");
	 
}