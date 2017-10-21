#include <stdio.h>
int main(int argc, char *argv[])
{
	double a,c,d;
	char b;
	int k; 
	printf("请输入要计算的表达式(例：a-b)：\n");
	k=scanf("%lf %c %lf",&a,&b,&c); 
	if(k==0||b!='+'&&b!='-'&&b!='*'&&b!='/')
		{printf("输入数据有误！/n");exit(1);}	
	d=b=='+'?a+c:b=='-'?a-c:b=='*'?a*c:a/c;
	printf("计算结果为：%g",d);
}