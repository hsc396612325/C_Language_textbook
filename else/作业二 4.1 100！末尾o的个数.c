#include <stdio.h>
int main(void)
{
	int i,num=1,sum=0;
	for(i=1;i<101;i++)
	{
		num*=i;
		num%=100000;
		if(num%10==0)
		{
			sum++;
			num/=10;	
		}	 
	}
	printf("%d\n",sum);	
} 