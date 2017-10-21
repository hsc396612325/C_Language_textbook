#include<stdio.h>
int main (void)
{
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		if(a[i]%2==0&&i%2)
		;
		else
			a[i]=a[i]+10;
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
}
