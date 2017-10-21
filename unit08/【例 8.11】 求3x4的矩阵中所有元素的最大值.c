#include <stdio.h>
int max(int b[][4])
{
	int i,j,max1;
	max1=b[0][0];
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			if(b[i][j]>max1)
				max1=b[i][j];
	return (max1);	
}
int main(void)
{
	int m,a[3][4]={5,16,30,12,14,16,18,19,11,24,111,12};
	m=max(a);
	printf("%d\n",m); 
}