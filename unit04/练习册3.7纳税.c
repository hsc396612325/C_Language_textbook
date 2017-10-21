#include <stdio.h>
int main(int argc, char *argv[])
{
	double s,p,p2,p3,p5;
	printf("请输入工资数：");
	scanf("%lf",&s);
	p2=2000*0.05;
	p3=p2+1000*0.08;
	p5=p3+2000*0.1; 
	if(s<1000) p=0;
	else if(s<2000) p=(s-1000)*0.05;
	else if(s<3000) p=p2+(s-2000)*0.08;
	else if(s>=3000&&s<5000) p=p3+(s-3000)*0.1;
	else 				  p=p5+(s-5000)*0.15; 
	printf("应纳税%g，实际工资%g\n",p,s-p); 
	return 0;
}