#include <stdio.h>
int main(int argc, char *argv[])
{
	double x,y,z,max;
	printf("请输入三个数字：\n");
	scanf("%lf%lf%lf",&x,&y,&z);
	max=x>y?(x>z?x:z):(y>z?y:z);
	printf("最大值为%g\n",max); 
	return 0;
}