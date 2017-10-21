#include<stdio.h>
int main (void)
{
	int i;
	int *p;
	char ch;
	char *q;
	printf("请输入一个整数，和字符型常量：");
	scanf("%d,%c",&i,&ch);
	p=&i;
	q=&ch;
	printf("直接输出i：%d\n",i);
	printf("指针输出i：%d\n",*p);
	printf("直接输出ch：%c\n",ch);
	printf("指针输出ch：%c\n",*q);
}