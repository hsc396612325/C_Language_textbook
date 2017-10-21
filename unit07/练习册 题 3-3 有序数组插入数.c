#include <stdio.h>
int main (void)
{
	int a[11]={-12,-3,0,1,3,5,9,54,66,75};
	int i,j,num;
	printf("请输入需要插入的数字：\n");
	scanf("%d",&num);
	
	for(i=-1;i<10;i++)
		if(num<a[i+1]||(num>a[9]&&i==9))//定位插入数据的位置 
		{
			for(j=10;j>i+1;j--)//该位置后的数据后移一 
				a[j]=a[j-1];
			a[i+1]=num;//插入数据 
			break;
		}
		
	for(i=0;i<11;i++)
		printf("%-5d",a[i]);
	
}