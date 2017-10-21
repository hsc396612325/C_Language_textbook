#include<stdio.h>
int main(void)
{
	int a[3][3];
	int (*q)[3],*p,max;
	for(q=a;q<a+3;q++)
		for(p=*q;p<*q+3;p++)
			scanf("%d",p);
	p=a;
	for(q=a,max=*p;q<a+3;q++)
		for(p=*q;p<*q+3;p++)
			if(max<*p)
				max=*p;
	printf("%d\n",max);
	return 0;
} 