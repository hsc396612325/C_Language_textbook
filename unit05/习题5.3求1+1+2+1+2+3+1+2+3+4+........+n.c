#include <stdio.h>
int main(void)
{
	int a[20],num=0;
	double ave;
	imt i,j;
	for(i=0;a[i-1]!=-1;i++)
		scanf("%d",&a[i]);
	for(j=0;j<i;j++)
		num+=a[j];
	ave=num/1.0/i;
	printf("%d %.2lf\n",num,ave);
}