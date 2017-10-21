#include<stdio.h>
int main (void)
{
	int A[3][4]={{3,2,1,5},{8,6,5,7},{9,8,6,7}};
	int B[3];
	int i,j,k;
	
	//将每一行元素最小值存入B中
	for(i=0;i<3;i++)
	{
		k=A[i][0];
		for(j=0;j<4;j++)
		{
			if(k>A[i][j])
				k=A[i][j];
		}
		B[i]=k;
	} 
	
	//输出A
	printf("矩阵A为：\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ",A[i][j]);
		printf("\n");	
	} 
	
	//输出B
	printf("\n由A每行最小值构成的矩阵B；\n");
	for(i=0;i<3;i++)
		printf("%d\n",B[i]);
	
	return 0; 
}