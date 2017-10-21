#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i,j,k,m,score[4][2]={0};
	int t,sum[4];
	printf("请输入4位同学的数学和语文成绩：\n");
	for(i=0;i<4;i++)
		scanf("%d %d",&score[i][0],&score[i][1]);//输入成绩 
	for(i=0;i<4;i++)
		sum[i]=score[i][0]+score[i][1];//求和
	
	for(i=0;i<4;i++)//选择排序
	{
		k=i;//k存储第i趟最小值下标 
		for(j=i+1;j<4;j++)
			if(sum[k]<sum[j])//寻找最小值 
				k=j;
		if(k!=i)
		{
			for(j=0;j<2;j++)
			{
				m=score[i][j];
				score[i][j]=score[k][j];
				score[k][j]=m;
			}
			t=sum[i];
			sum[i]=sum[k];
			sum[k]=t;
			
		}	
	}
	
	printf("排序后结果如下：\n");
	printf("数学\t语文\t总分\t\n");
	for(i=0;i<4;i++)
		printf("%d\t%d\t%d\n",score[i][0],score[i][1],sum[i]);
	return 0; 
}