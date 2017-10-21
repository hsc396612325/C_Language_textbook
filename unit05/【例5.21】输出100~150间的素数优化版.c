#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int m,i,j=0,k;
	printf("100~150范围内所有素数为：\n");
	for(m=101;m<=150;m+=2)	/*步长为2原因：偶数肯定不是素数*/ 
	{	k=sqrt(m);		
		for(i=2;i<=k;i++)
		{	
			if(m%i==0)break;/*内循环从2到sprt(m)依次枚举，看是否为m的因子*/ 
		}
		if(i>=k+1)			/*倘若从2到sprt(m)均不是m的因子，即i>=k+1*/ 
		{			
			printf("%-4d",m);
			j++;
			if(j%5==0) printf("\n");/*控制为5个为一行进行输出*/ 
		}
					
	}
	return 0;
}