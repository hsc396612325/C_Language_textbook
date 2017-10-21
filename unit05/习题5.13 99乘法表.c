#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
			printf("%dX%d=%d\t",j,i,i*j);
		printf("\n");
	}
	return 0;
}