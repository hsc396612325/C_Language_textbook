#include <stdio.h>
int main(int argc, char *argv[])
{
	int x=1,y=2;
	printf("%d\n",x,y);        /*输出1*/ 
	printf("%d\n",x+y);        /*输出3*/ 
	printf("%d %d %d\n",x+y,x+=3,y+=1); /*输出37*/ 
	printf("%d\n",x+y,x++,y++); /*输出5*/ 
	return 0;
}
/*对比可得当printf中包含算式时，从右向左计算*/