#include <stdio.h>
int main(void)
{
	int i,j;
	for(i=1;i<6;i++)
	{
		if(i<=(5+1)/2)
		{
			for(j=0;j<14-2*i;j++) 
				printf(" ");
			for(j=0;j<2*i;j++)
				printf("*");
			printf("\n");
		}
		else
		{
			for(j=0;j<2+2*i;j++) 
				printf(" ");
			for(j=0;j<12-2*i;j++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}