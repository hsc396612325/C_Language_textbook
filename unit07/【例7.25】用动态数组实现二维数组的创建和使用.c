#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1,n2;
	int **array,i,j;
	printf("请输入一维(行数)长度：\n");
	scanf("%d",&n1);
	printf("请输入二维(列数)长度：\n"); 
	scanf("%d",&n2);
	/*遵循从外层到里层，逐层申请的原则*/
	
	array=(int**)malloc(n1*sizeof(int));//申请外层 
	if(array == NULL)
	{
		printf("申请失败！\n");
		exit(0);
	} 
	for(i=0;i<n1;i++)//申请内层 
	{
		array[i]=(int*)malloc(n2*sizeof(int));
		if(array[i]==NULL)
		{
			printf("申请失败！\n");
			exit(0); 
		}
	}
	
	printf("请输入想保存的矩阵：\n");
	
	for(i=0;i<n1;i++)//输入 
		for(j=0;j<n2;j++)
			scanf("%d",&array[i][j]);
 	puts("");
	
	for(i=0;i<n2;i++)//输出 
	{
		for(j=0;j<n2;j++)
			printf("%-5d",array[i][j]);
		printf("\n");
	}
	
	for(i=0;i<n1;i++)
		free(array[i]);//释放二维所占内存
	free(array);//释放一维所占内存 
	return 0;
}