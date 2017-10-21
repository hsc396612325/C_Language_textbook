#include <stdio.h>
int main(int argc, char *argv[])
{
	int x;
	printf("请输入一个五位数以下的整数");
	scanf("%d",&x); 
	if(x>100000)
		printf("数据有误！\n"); 
	else if(x/10000!=0)
		printf("五位数，其个位数为%d\n",x%10);
	else if(x/1000!=0)
		printf("四位数，其个位数为%d\n",x%10);
	else if(x/100!=0)
		printf("三位数，其个位数为%d\n",x%10);
	else if(x/10!=0)
		printf("二位数，其个位数为%d\n",x%10);
	else if(x/1!=0)
		printf("一位数，其个位数为%d\n",x%10);
	return 0;
}