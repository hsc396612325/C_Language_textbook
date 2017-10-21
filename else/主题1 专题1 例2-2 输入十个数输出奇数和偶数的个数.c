#include <stdio.h>
int main(void)
{
	int loop,x,cou1=0;
	for(loop=1;loop<11;loop++)
	{
		scanf("%d",&x);
		if(x%2)
			cou1++;
	}
	printf("偶数有%d个，奇数有%d个\n",10-cou1,cou1);
	return 0;
}