#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,sum;
	for(i=1;i<1000;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
			if(i%j==0)
				sum+=j;
		if(sum==i)
			printf("%d\t",i);
	}
	printf("\n");
	return 0;
}