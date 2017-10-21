#include <stdio.h>
int main(void)
{
	int loop,x,max;
	for(loop=1;loop<11;loop++)
	{
		scanf("%d",&x);
		if(!(loop-1))
			max=x;
		else if(x>max)
			max=x;
	}
	printf("max=%d\n",max);
	return 0;
}