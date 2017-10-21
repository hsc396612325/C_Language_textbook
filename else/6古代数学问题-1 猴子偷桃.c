#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,n=2;
	for(i=0;i<7;i++)
		n=(n+1)*2;
	printf("%d\n",n);
	return 0;
}