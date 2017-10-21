#include <stdio.h> 
#define N 5
int main(void)
{
	int i,j,k,m=1,r=1;
	int a[2][N]={0};
	printf("请输入%d个数：\n",N);
	for(i=0;i<N;i++)
		scanf("%d",&a[0][i]);//数组存储在a[0]行 

	for(i=0;i<N;i++)
	{
		if(a[1][i]!=0)//已登记过的数不为0
			continue;
		k=i;
			
		for(j=i;j<N;j++)//在未登记的数中找到最小数
			if(a[1][j]==0&&a[0][j]<a[0][k])
				k=j;
		if(k!=i)
			i--;
				
		a[1][k]=r++;//记录名次
		m++;
			
		for(j=0;j<N;j++)//记录同名次
			if(a[1][j]==0&&a[0][j]==a[0][k])
			{
				a[1][j]=a[1][k];
				m++;
			} 	

			 
	} 

	for(i=0;i<N;i++)
		printf("%-5d",a[0][i]);
	printf("\n");
	for(i=0;i<N;i++)
		printf("%-5d",a[1][i]);
	printf("\n");	
}
/*m表示登记过数的个数
 思路：i从0到N循环（跳过登记过的数），寻找之后每次的最小值，赋给其名次
 		再记录同名次的数*/ 