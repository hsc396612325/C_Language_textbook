#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *array=NULL,max; 
	int i,num,j;
	printf("需要输入几位同学的成绩：");
	scanf("%d",&num);
		
	array=(double*)malloc(sizeof(double)*num);//申请内存
	if(array==NULL)//若申请失败 
	{
		printf("输入有误！\n");
		exit(0);	
	}	
	
	printf("请输入%d位同学的成绩：\n",num);//成绩输入 
	for(i=0;i<num;i++)
		scanf("%lf",&array[i]);
	
	max=array[0];//寻找最大值 
	j=0;
	for(i=1;i<num;i++)
		if(max<array[i])
		{
			max=array[i];
			j=i;	
		}
		
	printf("成绩最高的是%d位同学，为%g分\n",j+1,max);//输出结果
	
	free(array);//释放内存 
	return 0;
}
//动态数组 申请：（）malloc（）
//释放：free() 