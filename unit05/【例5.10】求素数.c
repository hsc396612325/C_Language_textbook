#include <stdio.h>
int main(int argc, char *argv[])
{
	int m;
	int i;
	int flag=1;
	printf("请输入一个正整数：\n");
	scanf("%d",m);
	for(i=2;i<m;i++)		/*算法思想：将m同2~m-1之间的数依次相除*/ 
	{	flag=1
		if(m%i==0)			/*当存在一个2~m-1的数可以是m被整除则为非素*/		
		{flag=0;i=m;}		/*不存在为素数*/ 
	}
	if(flag==0)printf("不是素数\n"); 
	else printf("是素数\n");
	return 0;
}