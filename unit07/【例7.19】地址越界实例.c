#include <stdio.h>
int main(void)
{
	char ps[5]="Goodhhhhh!",*p=ps;//越界 
	char pt[]="you are a student";
	printf("%s\n",ps);
	for(p=ps;p<ps+10;p++)//越界 
		*p='M';
	printf("%s\n",ps);
	gets(ps);//假如输入超过5位则越界 
	printf("%s\n",ps);
	return 0;
}