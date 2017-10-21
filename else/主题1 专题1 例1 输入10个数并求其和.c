#include <stdio.h>
int main(void)
{
	int loop,n,sum=0;
	for(loop=1;loop<11;loop++)
	{
		scanf("%d",&n);
		sum+=n;
	}
	printf("%d\n",sum);
	return 0;
}
/*1.循环变量loop，区间左闭右开，循环结束时，循环变量为第一个不满足条件的值*/
/*2类加强sum的初始化*/
/*3循环中的输入*/ 