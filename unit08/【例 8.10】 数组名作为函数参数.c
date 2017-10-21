#include <stdio.h>
void sort(int b[10],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(b[j]<b[j+1])
			{
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
}

int main(void)
{
	int a[10],i;
	printf("请输入10个数：\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	sort(a,10);
	printf("排序后为：\n");
	for(i=0;i<10;i++)
	printf("%-5d",a[i]);	
}
//以变量名（数组元素）为参数，形参改变 实参不变
//以数组名为参数，形参改变 实参不变 