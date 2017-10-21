#include <stdio.h>
int main (void)
{
	int C[2][3]={{1,3,5},{2,4,6}},D[3][2]={{1,2},{3,4},{5,6}};
	int i,j,k,E[2][2]={0};
	for(i=0;i<2;i++)//历遍行 
		for(j=0;j<2;j++)//历遍列 
			for(k=0;k<3;k++)
				E[i][j]+=C[i][k]*D[k][j];//矩阵乘法定义 (注意E的初始化) 
	printf("E=B*C,E=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%-4d ",E[i][j]);
		printf("\n");
	} 
}