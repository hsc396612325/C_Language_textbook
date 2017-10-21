#include <stdio.h>
int main(void)
{
	int a[10];
	int i,j,change=1,t;    //change 标志这一轮是否有交换 
	printf("请输入10个数字：");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]); 
	for(i=0;i<10&&change;i++)
	{
		change=0;
		for(j=0;j<10-i-1;j++) //i=n时，说明以进行了n+1次排序，后n+1个数以排好序 
		{					 // 所以这一轮只需要从0到10-n+1这些间进行相邻交换 
			if(a[j]>a[j+1])   //相邻两个数如果前面的数大，则交换 
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				change=1;
			}
		}
	}
	printf("这些数据从小到大依次为：\n");
	for(i=0;i<10;i++)
		printf("%-5d",a[i]);
	printf("\n");
}