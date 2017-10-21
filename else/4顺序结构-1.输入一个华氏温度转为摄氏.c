#include <stdio.h>
int main(int argc, char *argv[])
{
	double C,F;
	printf("请输入一个华氏温度：\n");
	scanf("%lf",&F);
	C=5/9.0*(F-32);
	printf("转化为摄氏温度为：%g\n",C); 
	return 0;
}