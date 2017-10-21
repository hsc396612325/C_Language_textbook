#include <stdio.h>
int main(int argc, char *argv[])
{
	double x,money;
	int k;
	printf("请输入公里数:");
	k=scanf("%lf",&x);
	if(k==0||x<0){printf("输入错误！\n");exit(1);}
	if(x<3) money=7;
	else if(x<8) money=7+(int)(x-2)*1.73;
	else         money=7+5*1.73+(int)(x-7)*2;
	printf("%g公里共%g元\n",x,money); 
	return 0;
}