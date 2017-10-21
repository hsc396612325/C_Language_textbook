#include <stdio.h>
#define JG 20.8
int main(int argc, char *argv[])
{
	float a,b;
	printf("请输入房间的长宽");
	scanf("%f%f",&a,&b);
	printf("共需%g元",a*b*JG); 
	return 0;
}