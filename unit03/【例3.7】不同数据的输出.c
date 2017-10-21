#include <stdio.h>
int main(int argc, char *argv[])
{
	int a=12345,b=-12345;
	float c=54321.123450;
	double d=765432.1234500000;
	char e='a';
	printf("以原样输出:a=%d,b=%d,c=%f,d=%lf,e=%c,e=%d\n",a,b,c,d,e,e);
	printf("以八进制输出:a=%#o\n",a);
	printf("以符号输出:a=%+d\n",a);
	printf("修饰宽度输出:a=%8d\n",a);/*8为修饰宽度（用于整数），实际数据大于8时原样输出，小于时以空格空开*/ 
	printf("修饰宽度输出:a=%08d\n",a);/*8为修饰宽度（用于整数），实际数据大于8时原样输出，小于时以0补齐*/
	printf("去掉无意义0d=%g\n",d);
	printf("以指数形式输出d=%e\n",d); 
	printf("限制输出位数d=%9.9lf",d);/*.9表示附加域宽，实际数据大于9时原样输出，小于时9以0补齐*/
	return 0;
}