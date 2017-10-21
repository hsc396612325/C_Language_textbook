#include <stdio.h>
int main(void)
{
	int a=1,b=5,c=10;
	int *p;
	p=&a;
	printf("*p=%d\n",*p);//1
	printf("*p+1=%d\n",*p+1);//2
	printf("*(p+1)=%d\n",*(p+1));//5
	printf("*p+2=%d\n",*p+2);//3
	printf("*(p+2)=%d\n",*(p+2));//10
	
	
}