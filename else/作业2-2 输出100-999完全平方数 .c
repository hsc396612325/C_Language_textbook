#include <stdio.h>

int main(void)
{
	int n,i;
	for(n=10;n<33;n++)
	{
		i=n*n;
		if(i>1000)
			break;
		else if(i%10==i/10%10)
			printf("%d\n",i);
		else if(i%10==i/100)
			printf("%d\n",i);
		else if(i/10%10==i/100)
			printf("%d\n",i);
	}
}