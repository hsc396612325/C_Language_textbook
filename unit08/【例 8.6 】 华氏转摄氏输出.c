#include <stdio.h>
int ftoc(double f)
{
	return (5.0/9.0)*(f-32);
}
int main(void)
{
	double f;
	printf("请输入一个华氏温度:\n");
	scanf("%lf",&f);
	printf("摄氏温度为：%d\n",ftoc(f));
	return 0;
}
//返回值同函数类型保持一致 