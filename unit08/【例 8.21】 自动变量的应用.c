#include <stdio.h>

void func(int n)
{
	auto int a=2;//自动变量每调用一次重新赋值
	a+=2; 
	printf("func:n=%d a=%d\n",n,a);
}
int main(void)
{
	int a=0;
	func(1);
	printf("main:n=1 a=%d\n",a);
	a+=10;
	func(2);
	printf("main:n=2 a=%d\n",a);
}
//自动变量
//1.关键字：auto或者未加static的局部变量
//2.存放区：动态存储区
//3.生存期：函数调用结束 
//4.作用域：对应函数
//5.1 特点：每次调用会被初始化，不保存运行结果 
//5.2 特点：若未初始化，其值为随机数
//5.3 特点：全局变量不能为自动变量
//5.4 特点：使用结束时释放其所占空间
//6.包括： 函数中非静态局部变量和形参 