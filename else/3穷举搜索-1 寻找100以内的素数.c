#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j;
	for(i=2;i<100;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(i==j)
			printf("%d\t",i);
	}
	printf("\n");
	return 0;
}