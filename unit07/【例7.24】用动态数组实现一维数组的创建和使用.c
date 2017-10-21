#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main (void)
{
	int *array=NULL,num,i;//NULL--空指针
	printf("你要输入几个数据：\n");
	scanf("%d",&num);
	array=(int*)malloc(sizeof(int)*num);//申请动态数组所占的内存空间 
	if(array==NULL)//若申请失败 
	{
		printf("输入有误！\n");
		exit(0);//终止程序 
	} 
	printf("请输入%d个数据\n",num);
	for(i=0;i<num;i++)
		scanf("%d",&array[i]);
		
	printf("你输入的是：\n");
	for(i=0;i<num;i++)
		printf("%d",array[i]);

	free(array);//释放所申请的空间 
		
	return 0;
}