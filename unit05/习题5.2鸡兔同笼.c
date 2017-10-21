#include <stdio.h>
int main(void)
{
	int x,y,a,b;
	printf("输入鸡兔个数和腿的个数：");
	scanf("%d %d",&a,&b);
	for(x=0;x<=a;x++) 
	{
	 	y=a-x;
		if(2*x+4*y==b)
			printf("鸡=%d,兔=%d\n",x,y);	
	}
	if(x==a+1)
		printf("输入有误，无法求解\n"); 
	return 0;
}