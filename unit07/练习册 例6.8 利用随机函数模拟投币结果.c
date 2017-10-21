#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int a[2][2]={0};
	int i,n1,n2;
	for(i=0;i<100;i++)
	{
		n1=rand()%2;
		n2=rand()%2;
		a[n1][n2]++;
	}
	printf("两次为正的次数有：%d\n",a[0][0]);
	printf("一正一反的次数有：%d\n",a[0][1]+a[1][0]);
	printf("两次为反的次数有：%d\n",a[1][1]);
	return 0;
}