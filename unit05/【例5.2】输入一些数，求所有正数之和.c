#include <stdio.h>
int main(int argc, char *argv[])
{
	double x,sum=0;
	printf("请输入数据，当输入0/负数时输出之前的和");
	scanf("%lf",&x);
	while(x>0)
	{
		sum+=x;
		scanf("%lf",&x);
	} 
	printf("%g\n",sum);
	return 0;
}