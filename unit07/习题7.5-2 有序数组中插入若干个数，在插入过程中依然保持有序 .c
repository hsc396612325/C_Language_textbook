#include <stdio.h>
#define N 16
int main (void)
{
	int num,a[200]={-45,-8,-4,0,5,7,9,16,25,37,49,55,67,78,87,99};
	int i,j,k;
	printf("输入需要插入数的个数：\n");
	scanf("%d",&num);
	
	printf("输入需要插入的数:\n");
	for(i=0;i<num;i++)//将需要插入的数放在a数组最后 
		scanf("%d",&a[199-i]);
	 
	for(i=0;i<num;i++) //对需要插入的数历遍 
	{
		for(j=0;j<N+i;j++)//历遍已排好序的数组 
		{
			if(a[199-i]<a[j])//寻找插入数的位置 
			{
				for(k=N+i;k>j;k--)//找到后，将其插入 
					a[k]=a[k-1]; 
				a[j]=a[199-i];
				break;
			}		
		}
		if(j==N+i)//假如需插入的数最大 
				a[N+i]=a[199-i];//放在末尾 
	} 
	for(i=0;i<N+num;i++)
		printf("%-4d",a[i]);
	printf("\n");
}