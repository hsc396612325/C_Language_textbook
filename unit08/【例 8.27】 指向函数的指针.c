#include <stdio.h>
int f(int x)
{
	return 3*x*x+5*x-7;
}
int main(void)
{
	int (*p)();//定义p为指向函数的指针型变量
	int a;
	p=f;//赋值 
	printf("Input x=\n");
	scanf("%d",&a);
	printf("(*p)(x)=%d\n",(*p)(a));//使用指针代替函数 
	printf("(*p)(2x)=%d\n",(*p)(2*a));
}