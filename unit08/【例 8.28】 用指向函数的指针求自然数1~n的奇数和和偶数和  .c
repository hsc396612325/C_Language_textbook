#include <stdio.h>
int evensum(int n)
{
	int i,sum=0;
	for(i=2;i<=n;i+=2)
		sum+=i;
	return sum;
}

int oddsum(int n)
{
	int i,sum=0;
	for(i=1;i<=n;i+=2)
		sum+=i;
	return sum;
}
int main(void)
{
	int n,sum,flag;
	int (*p)(int);
	printf("请输入n：\n");
	scanf("%d",&n);
	printf("求n之前奇数和请输0,求n之前偶数和请输其他\n");
	scanf("%d",&flag);
	if(flag)//如果为奇数 
		p=evensum;
	else
		p=oddsum;
	sum=(*p)(n);
	printf("sum=%d\n",sum); 
	return 0;
}

