#include <stdio.h>
int main(int argc, char *argv[])
{
	double n=50;
	int i;
	for(i=1998;n<=100;i++)
		n*=1.11;
	printf("%d\n",i);
	return 0;
}