#include <stdio.h>
#include <math.h>
int main (void)
{
	int i,j,n,max,t=1,x=1;
	printf ("请输入一个整数：");
		scanf("%d",&n);
	for(i=-(n-1)/2;i<=(n-1)/2;i++)   /*i从-2到2递加,类比x轴*/ 
	{
		t=1;
		for(j=-(n-1)/2;j<=(n-1)/2;j++)/*i从-2到2递加,类比y轴*/ 
			{
				max=fabs(i)>fabs(j)?fabs(i):fabs(j);/*对i，j中大值进行处理*/ 
				printf("%-3d",-max+(n+1)/2); /*利用线性函数求出输出结果与i,j中大值关系*/ 
				if(n%2==0&&j==0&&t)/*对偶数进行微调*/ 
					{
					 j--;
					 t=0;
					 }
			}
			printf("\n");
		if(n%2==0&&i==0&&x)/*对偶数进行微调*/
			{
			 i--;
			 x=0;
			}
	}
}