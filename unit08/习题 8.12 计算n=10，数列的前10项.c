#include <stdio.h>
int main(void)
{
	int a[20]={2,3},i,j;
	for(i=2;i<10;i++)
	{
		if(a[i-1]*a[i-2]<10)
			a[i]=a[i-1]*a[i-2];
		else
		{
			a[i]=a[i-1]*a[i-2]/10;
			a[i+1]=a[i-1]*a[i-2]%10;
			i++;		
		}
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
}