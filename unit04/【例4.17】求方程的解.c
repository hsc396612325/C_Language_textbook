#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	float a,b,c,d;
	int k;
	printf("请输入一元二次方程的三个系数a= b= c=\n");
	k=scanf("%d %d %d",&a,&b,&c);
	if(k==0)
		{printf("输入数据出错");exit(1);}
	if(a==0){printf("输入的不为一元二次方程\n");exit(1);} 
	d=(b*b-4*a*c);
	if(fabs(d)>1e-6)
		printf("该方程有两个根，x1=%f,x2=%g\n",(-b+sqrt(b))/(2*a),(-b-sqrt(b))/(2*a));
	else if(fabs(d)<=1e-6)
		printf("该方程有一个根，x1=x2=%g\n",(-b)/(2*a));
	else
		printf("该方程有两个复根，x1=%g,x2=%g\n",(-b)/(2*a),sqrt(-d)/(2*a)); 
	return 0;
}