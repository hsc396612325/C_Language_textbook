#include <stdio.h>
int main(void)
{
	int a[10];
	int i,max,min;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	max=a[0];
	min=a[9];
	for(i=1;i<10;i++)
		if(max<a[i])
			max=a[i];
	for(i=0;i<9;i++)
		if(min>a[i])
			min=a[i];
	printf("最大值=%d,最小值=%d\n",max,min);
	return 0;
}