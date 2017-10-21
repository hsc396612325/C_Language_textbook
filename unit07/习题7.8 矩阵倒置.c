#include <stdio.h>

int main(void)
{
	int a[3][4]={{31,32,33,34},{21,22,23,24},{11,12,13,14}};
	int b[4][3];
	int i,j;
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			b[j][i]=a[i][j];
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	}		
	printf("×ªÖÃºó£º\n"); 
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
			printf("%-4d",b[i][j]);
		printf("\n");
	}
	return 0;
}