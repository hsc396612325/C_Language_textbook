#include <stdio.h>
int main(void)
{
	int i=3,p;
	p=f(i,++i,++i);
	printf("%d",p);
}
int f(int a,int b,int c)
{
	printf("%d %d %d\n",a,b,c);
	return(a+b+c);
}
//c-free从右向左的顺序求实参的值 