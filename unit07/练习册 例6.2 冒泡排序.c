#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main (void)
{
	int *array=NULL,num;
	int i,j,change=1,t;
	printf("你要对几个数进行排序：");
	scanf("%d",&num);
	array=(int*)malloc(sizeof(int)*num);//申请内存 
	if(array==NULL)
	{
		printf("输入有误。\n");
		exit(0); 
	} 
	printf("请输入需要排序的数：\n");
	for(i=0;i<num;i++)
		scanf("%d",&array[i]); 
	for(i=0;i<num&&change;i++)//冒泡排序 
	{
		change=0;
		for(j=0;j<num-i-1;j++)
		{
			if(array[j]<array[j+1])
			{
				t=array[j];
				array[j]=array[j+1];
				array[j+1]=t;
				change=1;
			}
		} 
	}
	printf("排序后结果为：");
	for(i=0;i<num;i++)
		printf("%-5d",array[i]);
	printf("\n");
	free(array);//释放内存 
	return 0;
}