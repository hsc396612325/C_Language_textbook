#include <stdio.h>
void swap(int x,int y)
{
	int t;
	t=x;
	x=y;
	y=t;
}

int main (void)
{
	int a=3,b=5;
	swap(a,b);
	printf("a=%d,b=%d\n",a,b);
}
//实参不随形参的值变化而变化 