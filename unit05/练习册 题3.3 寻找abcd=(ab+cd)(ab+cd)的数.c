#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,x,y;
	for(n=1000;n<10000;n++)
	{
		x=n%100;
		y=n/100;
		if((x+y)*(x+y)==n)
			printf("%d ",n);
	}
	printf("\n");
	return 0;
}