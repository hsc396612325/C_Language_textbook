#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	char *ch1=(char *)calloc(26,sizeof(char));
	char *ch2=(char *)malloc(sizeof(char[26]));
	for(i=0;i<26;i++)
	{
		ch1[i]=65+i;
		ch2[i]=97+i; 
	} 
	printf("26个大写字母:\n");
	for(i=0;i<26;i++)
	{
		printf("%c ",ch1[i]);
		if(i==12||i==25)
			printf("\n");
	}
	printf("26个小写字母:\n");
	for(i=0;i<26;i++)
	{
		printf("%c ",ch2[i]);
		if(i==12||i==25)
			printf("\n");
	}
}