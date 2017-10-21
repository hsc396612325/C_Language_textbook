#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k=0;
	for(i=3;i<100;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(i==j)
		{
			printf("%-4d",i);
			k++;
			if(k%10==0)
				printf("\n");
		}
	}
	printf("\n");
	return 0;
}