#include <stdio.h>
int main (void)
{
	int f1=1,f2=2,f3=3;
	int i;
	for(i=3;i<21;i++)
	{
		f3=f2+f1;
		f1=f2;
		f2=f3;
	}
	printf("第20个月有%d只兔子\n",f3);
}