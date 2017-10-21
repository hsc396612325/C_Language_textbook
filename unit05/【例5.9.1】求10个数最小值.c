#include <stdio.h>
#define N 10 
int main(int argc, char *argv[])
{
	double x,min;
	int i;
	printf("请输入第1个数\n");
	scanf("%lf",&min);
	for(i=2;i<=N;i++)
	{
		printf("请输入%d个数:\n",i);
		scanf("%lf",&x);
		if(x<min) min=x; 
	}
	printf("最小值为：%g\n",min);
	return 0;
}