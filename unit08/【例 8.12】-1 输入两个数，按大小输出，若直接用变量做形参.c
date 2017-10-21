#include <stdio.h>
void swap(int a1,int a2)
{
	int a;
	a=a1;
	a1=a2;
	a2=a;
}

int main(void)
{
	int m,n;
	printf("请输入两个数：\n");
	scanf("%d%d",&m,&n);
	if(m>n)
		swap(m,n);
	printf("%d %d\n",m,n);
}