#include <stdio.h>
void invery(int a[4][4])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)//j的初始化 
		{
			a[i][j]=a[i][j]+a[j][i];
			a[j][i]=a[i][j]-a[j][i];
			a[i][j]=a[i][j]-a[j][i];   
		}
	}
}

int main(void)
{
	int i,j,a[4][4];
	printf("请输入一个4x4矩阵:\n");
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			scanf("%d",&a[i][j]);
			
	printf("你输入的矩阵为：\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%-4d",a[i][j]); 
		printf("\n"); 
	} 
	
	invery(a);
	
	printf("矩阵转置后为：\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%-4d",a[i][j]); 
		printf("\n"); 
	} 
	return 0;
}