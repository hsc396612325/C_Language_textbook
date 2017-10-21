#include <stdio.h>
int main(void)//¿Î±¾ 
{
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j,temp;
	for(i=0;i<3;i++)
	{
		temp=a[i][3];
		for(j=3;j>0;j--)
			a[i][j]=a[i][j-1];
		a[i][0]=temp;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%-5d",a[i][j]); 
		printf("\n");
	}
}
int main1(void)//×Ô¼º 
{
	int a[3][5]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=4;j>0;j--)
			a[i][j]=a[i][j-1];
		a[i][0]=a[i][4];
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%-5d",a[i][j]); 
		printf("\n");
	}
}