#include <stdio.h>
int main(void)
{
	int num=1,i;
	for(i=0;i<100;i++)
	{
		num=num*3;
		printf("%d\n",num);
		num=num%1000;
	}
	printf("%d\n",num);
}