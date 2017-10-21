#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,i,s;
	for(m=2;m<=500;m++)		
	{
		s=0;
		for(i=1;i<=m/2;i++)		/*寻找真因子的范围为1~m/2*/ 
		{
			if(m%i==0)s+=i;		/*对所有真因子进行累加*/ 
		}
		if(m==s)	printf("%d ",m);/*判断是否为完全数*/ 
		}
	printf("\n");
	return 0;
}