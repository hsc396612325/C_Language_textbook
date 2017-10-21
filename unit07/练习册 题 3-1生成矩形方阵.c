#include <stdio.h>
int main (void)//课本 
{
	int a[10][10]={0};
	int n,m,i=0,j=0,k=1;
	printf("请输入阶数:\n");
		scanf("%d",&n);
	if(n%2)
		m=n/2+1;
	else
		m=n/2;
	for(i=0;i<m;i++)
	{
		for(j=i;j<n-i;j++)
			a[i][j]=k++;
		for(j=1+i;j<n-i;j++)
			a[j][n-1-i]=k++;
		for(j=n-2-i;j>i-1;j--)
			a[n-1-i][j]=k++;
		for(j=n-2-i;j>i;j--)
			a[j][i]=k++;
	} 
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%-5d",a[i][j]);
		printf("\n");;
	}
}

int main1 (void)//自己 
{
	int a[10][10]={0};
	int n,m,i=0,j=0,k,num=1;
	printf("请输入阶数:\n");
		scanf("%d",&n);
	if(n%2)
		m=n/2+1;
	else
		m=n/2;
	for(k=0;k<m;k++)
	{
		for(j=k,i=k;j<n-k;j++)
			a[i][j]=num++;
		for(i=1+k;i<n-k;i++)
			a[i][j-1]=num++;
		for(j=n-k-2;j>k-1;j--)
			a[i-1][j]=num++;
		for(i=n-k-2;i>k;i--)
			a[i][j+1]=num++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%-5d",a[i][j]);
		printf("\n");;
	}
}