#include <stdio.h>
void print_star()//打印*函数 
{
	int i;
	for(i=0;i<56;i++)
		printf("*");
	printf("\n");	
}
double area(double a,double b)
{
	double s;
	s=a*b;
	return s;
} 
int main()
{
	double a,b,s;
	print_star();
	printf("请输入矩形的长宽：\n");
	scanf("%lf%lf",&a,&b);
	s=area(a,b);
	printf("面积为：%if\n",s);
	print_star();
	return 0; 
} 