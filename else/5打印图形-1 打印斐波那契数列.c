#include <stdio.h>
int main(void)
{
	int i,f1=0,f2=1;
	for(i=0;i<10;i++)
	{
		printf("%-5d%-5d\n",f1,f2);
		f1=f1+f2;
		f2=f1+f2;
	}
	return 0;
}