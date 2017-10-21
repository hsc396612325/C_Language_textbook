#include <stdio.h>
int main(void)
{
	int i,j,a[5][5],k=1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++,k++)
			a[i][j]=k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
			printf("%-5d",a[i][j]);
		printf("\n");
	}
	return 0;
} 