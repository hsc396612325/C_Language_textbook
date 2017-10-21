#include <stdio.h>
int main(void)
{
	int i,j;
	int b[3][5]={{31,32,33,34,35},{21,22,23,24,25},{11,12,13,14,15}};
	printf("ÀûÓÃb[i][j]Êä³ö£º\n");
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			printf("b[%d][%d]=%d\t",i,j,b[i][j]);
	printf("\n");
	
	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			printf("*(b[%d]+%d)=%d\t",i,j,*(b[i]+j));
	printf("\n");
  
  	for(i=0;i<3;i++)
		for(j=0;j<5;j++)
			printf("*(*(b+%d)+%d)=%d\t",i,j,*(*(b+i)+j));

	return 0;
}