#include <stdio.h>
#define M 10
int main(void)
{
	int a[M]={-12,0,6,16,23,56,80,100,110,115};
	int num,low,mid,high;
	low=0;
	high=M-1;
	printf("请输入一个数字：\n");
	scanf("%d",&num);
	if(num<a[0]||num>a[M-1])
	{
		printf("该数字不在数组中\n");
		exit(0);
	}
	while(low<=high)
	{
		mid=(low+high)/2;
		if(num==a[mid])
		{
			printf("该数在数组中！在第%d位\n",mid+1);
			exit(0);
		}
		else if(num<a[mid])
			high=mid-1;
		else 
			low=mid+1;
	}
	if(low>=high)
		printf("该数字不在数组中\n");
	return 0;
}