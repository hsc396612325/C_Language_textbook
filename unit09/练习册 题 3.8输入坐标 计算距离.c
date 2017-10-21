#include <stdio.h>
#include <math.h>
struct zuobiao
{
	int x;
	int y;
};
int main(void)
{
	struct zuobiao a,b;
	double l; 
	printf("请输入第一个点的坐标：");
	scanf("%d%d",&a.x,&a.y); 
	printf("请输入第二个点的坐标：");
	scanf("%d%d",&b.x,&b.y);
	l=(a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
	l=sqrt(l);
	printf("(%d,%d)到(%d,%d)距离为%lf\n",a.x,a.y,b.x,b.y,l);
}