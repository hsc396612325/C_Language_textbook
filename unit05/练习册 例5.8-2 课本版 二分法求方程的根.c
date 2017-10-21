/* 二分法求方程3x*x*x-5x*x+7x-8=0的根*/
#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	double x1,x2,x0;
	double f1,f2,f0;
	do{
		printf("请输入根的范围：");
		scanf("%lf %lf",&x1,&x2);
		f1=3*x1*x1*x1-5*x1*x2+7*x1-8;
		f2=3*x2*x2*x2-5*x2*x2+7*x2-8; 
	}while(f1*f2>0);
	do{
		x0=(x1+x2)/2;
		f0=3*x0*x0*x0-5*x0*x0+7*x0-8;
		if(f1*f0<0)
			x2=x0;
		else
		{
			x1=x0;
			f1=f0; 
		}
	}while(fabs(f0)>1e-9);/*注意循环终止条件，不能是a-c、b-c，因为14,16行的赋值*/ 
	printf("%lf\n",x0);	
	return 0;
}