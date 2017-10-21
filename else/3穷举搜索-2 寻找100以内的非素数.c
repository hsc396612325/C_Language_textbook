#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	for(i=2;i<100;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
			{
				printf("%d\t",i);
				break;
			}
	}
	printf("\n");
	return 0;
}