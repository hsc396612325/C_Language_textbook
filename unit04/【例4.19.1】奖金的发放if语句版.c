#include <stdio.h>
int main(int argc, char *argv[])
{
	long lirun;
	float b,b1,b2,b4,b6,b10;
	b1=100000*0.1;
	b2=b1+100000*0.075;
	b4=b2+200000*0.05;
	b6=b4+200000*0.03;
	b10=b6+200000*0.15;
	printf("请输入利润：");
	scanf("%ld",&lirun);
	if(lirun<100000) b=lirun*0.1;
	else if(lirun<=200000) b=b1+(lirun-100000)*0.075;
	else if(lirun<=400000) b=b2+(lirun-200000)*0.05;
	else if(lirun<=600000) b=b4+(lirun-400000)*0.03;
	else if(lirun<=1000000) b=b6+(lirun-600000)*0.015;
	else b=b1+(lirun-1000000)*0.01;
	printf("奖金为%g\n",b);
	return 0;
}