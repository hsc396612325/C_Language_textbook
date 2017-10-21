#include <stdio.h>
void hanoi(int n,char x,char y,char z)//n个盘片从x借助y移向z 
{
	if(n==1)
		printf("%c-->%c\n",x,z);
	else 
	{
		hanoi(n-1,x,z,y);
		printf("%c-->%c\n",x,z);
		hanoi(n-1,y,x,z);	
	}	
}
int main (void)
{
	int n;
	printf("请输入A盘上的盘片数量：\n");
	scanf("%d",&n);
	hanoi(n,'A','B','C');
}