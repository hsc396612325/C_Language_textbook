#include <stdio.h>
int main(int argc, char *argv[])
{
	int j=10;
	switch(j)
	{
		case 9:j+=1;
		case 10:j+=2;
		case 11:j+=3;
		default:j+=4;
	}
	printf("j=%d\n",j);
	return 0;
}
/*1,case后各常量不能相同；2；case语句后可以加多个表达式，但不能加{}
  3，各case和default顺序可以改变，但前提是每个语句都存在break语句；
  4，default可以省略不写
  5，如果没有break语句，则从满足常量语句的后面以及进行，而break可以整个跳出switch语句 */ 