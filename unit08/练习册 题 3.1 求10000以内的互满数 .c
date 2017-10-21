#include <stdio.h>
int f1(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
		if(n%i==0)
			sum+=i;
	return sum;
}
int main(void)
{
	int i,j;
	for(i=1;i<10000;i++)
	{
		j=f1(i);
		if(j>i&&f1(j)==i)
			printf("%d %d\n",i,j);
	}	
}