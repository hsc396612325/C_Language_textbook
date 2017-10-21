#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double *array=NULL,a; 
	int i,num;
	printf("你需要输入几个整数：");
	scanf("%d",&num);
		
	array=(double*)malloc(sizeof(double)*num);//申请内存
	if(array==NULL)//若申请失败 
	{
		printf("输入有误！\n");
		exit(0);	
	}	
	
	printf("请输入这些数：\n");//输入 
	for(i=0;i<num;i++)
		scanf("%lf",&array[i]);
	
	for(i=0;i<num;i++)
		a=a+array[i]; 	
	printf("平均分为：%g \n",a/num);//输出结果
	
	free(array);//释放内存 
	return 0;
}
//动态数组 申请：（）malloc（）
//释放：free() 