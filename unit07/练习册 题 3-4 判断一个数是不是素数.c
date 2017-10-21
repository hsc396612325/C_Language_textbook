#include <stdio.h>
int main (void)
{
	int a,a1=0,i;
	printf("请输入一个数：\n");
	scanf("%d",&a);
	for(i=2;a%i;i++)//判断a是否为素数 
		;
	if(i!=a)
	{
	   printf("你输入的数不是素数\n");
	 	exit(0); 
	}	
	while(a)//逆置a 
	{
		a1=a1*10+a%10;
		a=a/10;	
	} 
	
	for(i=2;a1%i;i++)//判断a1是否为素数 
		;
	if(i!=a1)
	   printf("你输入的数不是可逆素数\n");
	else
		printf("你输入的数是可逆素数\n");	
	return 0; 
} 