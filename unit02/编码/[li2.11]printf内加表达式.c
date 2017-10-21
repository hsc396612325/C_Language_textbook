#include <stdio.h>
int main(int argc, char *argv[])
{
	int a=2,b=3,c=4,d=5,x;
	a+=b*c;    /*a=14*/
	b-=c/b;   /*b=2*/
	printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c*=2*(a+c),d%=a);
	printf("x=%d\n",x=a+b+c+d);
	return 0;
}