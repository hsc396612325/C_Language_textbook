#include <stdio.h>
int main(int argc, char *argv[])
{
	double a,c;
	char b;
	int k; 
	printf("请输入要计算的表达式(例：a-b)：\n");
	k=scanf("%lf %c %lf",&a,&b,&c); 
	if(k==0)
		{printf("输入数据有误！");exit(1);}	
	if(b=='+')
		printf("结果为：%g\n",a+c);
	else if(b=='-')
		printf("结果为：%g\n",a-c); 
	else if(b=='*')
		printf("结果为：%g\n",a*c);
	else if(b=='/')
		printf("结果为：%g\n",a/c);
	else
		printf("输入数据有误！");		
	 	
	return 0;
}