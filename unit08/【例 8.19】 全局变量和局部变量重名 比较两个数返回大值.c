#include <stdio.h>
int a=3,b=5;
int max(int x,int y)
{
	int c;
	c=x>y?x:y;
	return c;
}

int main(void)
{
	int a=8;
	printf("max=%d\n",max(a,b));
}
//注意在全局变量和局部变量同名的情况下，在局部变量的函数中，全局变量不起作用 