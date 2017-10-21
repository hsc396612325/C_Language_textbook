#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	for(i=1;i<10;i++)
		printf("%d\t",i);
	printf("\n");
	for(i=0;i<80;i++)
		printf("-");
	for(i=1;i<10;i++)
	{
		for(j=1;j<i+1;j++)
			printf("%dX%d=%d\t",j,i,i*j);
		printf("\n");
	}
	return 0;
}