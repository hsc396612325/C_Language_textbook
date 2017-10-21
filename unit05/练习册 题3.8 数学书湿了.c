#include <stdio.h>
int main (void)
{
	int n,i,j,k;
	for(i=2;i<10;i++)
		for(j=1;j<10;j++)
			for(k=1;k<10;k++)
			{
				n=i*(j*10+3+k)*i*(j*10+3+k);
				if(n%10==9&&n/1000==8)
					printf("[%d*(%d3+%d)]^2=8%d%d9\n",i,j,k,n/100%10,n/10%10);
			}
	return 0;	
}
