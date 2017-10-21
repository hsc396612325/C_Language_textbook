#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y,z,t;
	printf("请输入三个整数");
	scanf("%d %d %d",&x,&y,&z);
	if(x>y)
	{	
		x=t;x=y;y=t;
	} 
	if(x>z)
	{
		x=t;x=z;z=t;
	}
	if(y>z)
	{
		y=t;y=z;z=t;
	}
	printf("从小到大依次为：%d %d %d",x,y,z);
	return 0;
}