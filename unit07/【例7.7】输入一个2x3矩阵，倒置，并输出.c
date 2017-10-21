
#include <stdio.h>
int main (void)
{
	int i,j;
	int C[2][3],D[3][2];
	
	//输入矩阵C 
	printf("请一行一行输入2x3的矩阵；\n");
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			scanf("%d",&C[i][j]);
	
	//输出矩阵C 
	printf("你输入的矩阵为：\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
			printf("%-3d",C[i][j]);
		printf("\n");
	}
	
	//倒置
	for(i=0;i<2;i++)
		for(j=0;j<3;j++)
			D[j][i]=C[i][j];
			
	//输出D 
	printf("\n你输入的矩阵为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
			printf("%-3d",D[i][j]);
		printf("\n");
	}
	 
}