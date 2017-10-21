#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,x,sum=0;
	printf("请输入一个整数：");
	scanf("%d",&n);
	x=n%10;
	while(x!=0)
	{	
		if(x%2==1)
			sum+=x;
		n=n/10; 
		x=n%10;
	}
	printf("这个数各位上的奇数和为=%d\n",sum); 
	return 0;
}