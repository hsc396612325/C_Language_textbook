#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,n,x,sum;
	i=1;sum=0;
	printf("输入你要求和数的个数：");
	scanf("%d",&n);
	printf("请输入要加和的数："); 
	do{
		scanf("%d",&x);
		sum+=x;
		i++;
	} while(i<=n);
	printf("这些数和为：%d\n",sum);
	return 0;
}