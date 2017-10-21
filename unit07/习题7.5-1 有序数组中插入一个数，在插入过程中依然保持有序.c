#include <stdio.h>
#define N 16
int main (void)
{
	int num,a[50]={-45,-8,-4,0,5,7,9,16,25,37,49,55,67,78,87,99};
	int i,j;
	printf("请输入需要插入的数：\n");
	scanf("%d",&num);
	for(i=0;i<N;i++)
		if(num<a[i])
		{
			for(j=N;j>i;j--)
				a[j]=a[j-1];
			a[i]=num;
			break;
		}
	for(i=0;i<N+1;i++)
		printf("%4d",a[i]);
}