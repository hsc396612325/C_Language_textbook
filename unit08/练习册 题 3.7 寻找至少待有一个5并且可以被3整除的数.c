#include <stdio.h>
int main(void)
{
	int i;
	for(i=12;i<100;i+=3)
	{
		if(i%10==5||i/10==5)
		printf("%d\n",i);
	}
}