int main(void)
{
	int i,j,k,score[10],t;
	printf("输入十个数：\n");
	for(i=0;i<10;i++)
		scanf("%d",&score[i]);//输入 
	for(i=0;i<10;i++)
	{
		k=i;//k储存第i次时最小值的下标 
		for(j=i+1;j<10;j++)//寻找最小值 
		{
			if(score[k]<score[j])
				k=j;
		}
		t=score[k];//交换 
		score[k]=score[i];
		score[i]=t;
		
	}
	for(i=0;i<10;i++) 
		printf("%d  ",score[i]);
	return 0;
}