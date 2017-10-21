#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,x=1,y=0;
	for(i=10;i>1;i--)
	{
	y=(x+1)*2; /*前一天和这天的递推公式*/ 
	x=y;	   /*将y赋给x，为下一次递推做好准备*/ 
	}
	printf("一共有%d个桃\n",y);
	return 0;
}