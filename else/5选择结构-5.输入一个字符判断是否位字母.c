#include <stdio.h>
int main(int argc, char *argv[])
{
	char ch;
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
		printf("yes\n");
	else
		printf("no\n");	
	return 0;
}