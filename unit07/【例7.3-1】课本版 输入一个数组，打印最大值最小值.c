#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a[10];
	int i,max,min;
	printf("请输入10个数字:\n");
	fflush(stdout);	//清除标准输出函数stdout的缓存区 ,强制结果输入到屏幕中 
	for(i=0;i<10;i++)  
		scanf("%d",&a[i]);
	printf("数组元素有：\n");
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	max=min=a[0];
	for(i=1;i<10;i++)
	{
		if(max<a[i])
			max=a[i];
		else if(min>a[i])
			min=a[i];
	}
	printf("最大值=%d,最小值=%d\n",max,min);
	return 0;
}