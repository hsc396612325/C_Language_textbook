#include <stdio.h>
void main()
{
	register int temp=0,j;
	int i;
	for(i=1;i<100;i++)
	{
		for(j=0;j<1000;j++)
			temp+=j;
		printf("i=%d temp=%d\n",i,temp);
		temp%=i;
	}
}
//寄存器变量
//1.关键字：registor
//2.存放区：CPU寄存器中
//3.1 特点：生存期，作用域，基本特点同自动变量
//3.2 特点：由于储存在寄存器中，所以数据的调用非常快
//4.1 限制: 只能将自动变量设为寄存器变量
//4.2 限制：只能设置2~3个寄存器变量
//4.3 限制：只能讲int char stort 指针型设为寄存器变量
 