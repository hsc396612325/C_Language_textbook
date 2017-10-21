#include<stdio.h>
int main(void)
{
	int i,a[5],max1,max2;
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	max1=max2=a[0];	
	for(i=1;i<5;i++)
		if(max1<a[i])
			max1=a[i];
	for(i=1;i<5;i++)
		if(max1<a[i]&&a[i]!=max1)
			max2=a[i];
	printf("max1=%d,max2=%d\n",max1,max2);
}