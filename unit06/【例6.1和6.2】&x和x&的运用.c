#include <stdio.h>
int main(void)
{
	int i;
	int *p;
	printf("请输入一个整数：");//&取地址符，即取存放变量的首地址 
	scanf("%d",&i);			//*取值运算符，获取指针所指向变量的值 
	p=&i;
	printf("i=%d\n",i);  //i
	printf("*p=%d\n",*p);//i
	printf("&i=%d\n",&i);//p即i的地址 
	printf("p=%d\n",p); //p即i的地址
	printf("*&p=%d\n",*&p);//p 
	printf("&*p=%d\n",&*p);//p
	printf("*&i=%d\n",*&i);//i
	return 0;
}