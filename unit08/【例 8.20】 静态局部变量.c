#include <stdio.h>
int n=1;
void func()
{
	static int a=2;
	a+=2;
	++n;
	printf("func:n=%d a=%d\n",n,a);
}
int main(void)
{
	static int a;
	printf("main:n=%d a=%d\n",n,a);
	a+=10;
	printf("main:n=%d a=%d\n",n,a);
	printf("main:n=%d a=%d\n",n,a);
	func();
	func();
	func();
}
//静态局部变量：
//1.关键字：static
//2.存放区：静态存储区
//3.生存期：整个程序结束
//4.作用域：对应函数
//5.1 特点：只有在编译时才会被初始化，再次调用时不会被初始化，
//          其值为上次运行结束时保存值 
//5.2 特点：若未初始化，系统自动补零 