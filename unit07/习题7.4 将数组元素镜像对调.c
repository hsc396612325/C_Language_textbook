#include <stdio.h> 
int main(void)
{
	int a[50];
	int i,t,n;
	printf("你需要输入多少个数：\n");
	scanf("%d",&n);
	printf("你输入数字：\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]); 
	for(i=0;i<(n+1)/2;i++)
	{
		t=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=t;
	}
	for(i=0;i<n;i++)
		printf("%4d",a[i]);
}