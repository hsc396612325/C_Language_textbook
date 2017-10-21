#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,k;
			for(k=31;k<100;k++)
			{
				n=k*k;
				if((n%10==n/10%10) && (n/100%10==n/1000) && (n%10!=n/1000))
					printf("%d\n",n);	
			}
	return 0;
}