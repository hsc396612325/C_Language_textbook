#include<stdio.h>
int main(void)
{
	char str[100],*p;
	int a[10]={0},i=0,j;
	p=str;
	gets(p);
	while(*p)
	{
		if(*p>='0'&&*p<='9')
		{
			while(*p>='0'&&*p<='9')
			{
				a[i]=*p-'0'+a[i]*10;
				p++;
			}	
			i++;
		}
		else 
			p++;
	} 
	for(j=0;j<i;j++)
		printf("%d\t",a[j]);
} 