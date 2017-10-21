#include <stdio.h>
int main(void)
{
	int i,j=0,k;
	int base_array[101]={0}; //100分需要开辟101个空间作为计数器，同时清零处理 
	int sort_array[15];
	printf("请输入15个同学的成绩："); 
	for(i=0;i<10;i++)	   
		scanf("%d",&sort_array[i]);	//输入数组 
	for(i=0;i<10;i++)
		base_array[sort_array[i]]++;//将成绩出现次数统计到计数器中 
	 
	 /*排序结果输入到 sort_array数组中*/
	for(i=0;i<101;i++)
	{
		if(base_array[i]!=0)
		{
			for(k=0;k<base_array[i];k++)//i为数值大小，j为sort_array下标 
			{							//k为i出现的次数 
				sort_array[j]=i;
				j++;
			}
		}
	} 
	for(i=0;i<10;i++)
		printf("%5d",sort_array[i]); //结果输出 
}