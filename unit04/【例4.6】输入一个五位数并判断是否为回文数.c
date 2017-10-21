#include <stdio.h>
int main(int argc, char *argv[])
{
	long x;
	int wan,qian,shi,ge;
	printf("请输入一个五位数\n");
	scanf("%ld",&x);
	if(x>=10000&&x<100000)
	{
		wan=x/10000;
		qian=x%10000/1000;
		shi=x%100/10;
		ge=x%10;
		if(wan==ge&&qian==shi)
			printf("这个数是回文数\n"); 
		else
			printf("这个数确不是回文数\n"); 
	}
	else
 		{printf("输入不为五位数\n"); exit(1);} 
	return 0;
}
 /*exit()功能：结束程序运行，返回操作系统，并将“程序状态值“返回给操作系统。
 当程序状态值为0，表示程序正常退出；为非零值，表示程序出错退出*/