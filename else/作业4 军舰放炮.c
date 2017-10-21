#include <stdio.h>
int main (void)
{
	int i,t=0;
	for(i=0;i<61;i++)
	{
		if(i%2==0)
			t++;
		else if(i%3==0)
			t++;
		else if(i%5==0)
			t++;
	}
	printf("%d´Î\n",t);
}