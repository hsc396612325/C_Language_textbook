#include<stdio.h>
int main(void)
{
	int i,a[5],t;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=1;i<5;i++)
		if(a[0]<a[i])
		{
			t=a[0];
			a[0]=a[i];
			a[i]=t;	
		}
	for(i=2;i<5;i++)
		if(a[1]<a[i])
		{
			t=a[1];
			a[1]=a[i];
			a[i]=t;
		}
	printf("max1=%d,max2=%d\n",a[0],a[1]);
}