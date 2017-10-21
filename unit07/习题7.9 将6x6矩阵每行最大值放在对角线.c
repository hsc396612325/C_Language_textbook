#include <stdio.h>

int main(void)
{
	int a[6][6]={{7,8,95,45,2,1},{48,11,24,166,45,4},{12,15,44,64,44,66},{12,15,84,11,33,44},{12,54,21,12,15,1},{15,45,541,1,4,65}};
	int i,j,t;
	int max,k;
	for(i=0;i<6;i++)
	{
		max=a[i][0];
		for(j=1;j<6;j++)
		{
			if(max<a[i][j])//寻找这一行最大值 
			{
				max=a[i][j];
				k=j;
			}
		}
		t=a[i][i];//交换 
		a[i][i]=a[i][k];
		a[i][k]=t;
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
			printf("%-4d",a[i][j]);
		printf("\n");
	} 
}