#include <stdio.h>
void swap(int p1,int p2)
{
	int a;
	a=p1;
	p1=p2;
	p2=a;
}

int main(void)
{
	int m,n;
	printf("请输入两个数：\n");
	scanf("%d%d",&m,&n);
	if(m>n)
		swap(&m,&n);
	printf("%d %d\n",m,n);
}
//1.使用变量(数组元素)单纯的指针做形参，形参改变，实参不改变
//2.使用数组名(*指针)做形参，形参改变，实参改变 