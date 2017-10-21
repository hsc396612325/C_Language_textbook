#include <stdio.h>

int main (void)
{
	int a[11]={8,1,5,9,5,10,14,12,15,13,15};
	int num,i,x;
	printf("«Î ‰»Î»ÎX£∫");
	scanf("%d",&x);
	num=a[0];
	for(i=0;i<10;i++)
	{
		num=num*x+a[i+1];
	} 
	printf("%dx^10+%dx^9+%dx^8+%dx^7+%dx^6+%dx^5+",a[0],a[1],a[2],a[3],a[4],a[5]);
	printf("%dx^4+%dx^3+%dx^2+%dx+%d=%d\n",a[6],a[7],a[8],a[9],a[10],num);
}