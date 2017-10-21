#include <stdio.h>
int main(void)
{
	char str[62]="good morning!",*p=str;
	char *nstr="nice to meet you";
	printf("%s\n",p);
	printf("%s\n",nstr);
	gets(str);
	printf("%s\n",str);
	gets(p);
	printf("%s\n",str);
	return 0;
}