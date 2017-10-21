#include <stdio.h>
int main(int argc, char *argv[])
{
	double sum=0,n=1;
	int i,j;
	for(i=1;i<=100;i++)
	{
		n=1;				/*多重循环想清楚变量的初始化在何处*/ 
		for(j=1;j<=i;j++) n*=j;	
		sum+=n;
	}
	printf("1~100的阶乘和为%g\n",sum);
	return 0;
}