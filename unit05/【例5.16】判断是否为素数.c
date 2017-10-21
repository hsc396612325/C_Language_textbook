#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,i;
	int flag;
	printf("请输入一个正整数：\n");
	scanf("%d",&x);
	flag=1; 
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{flag=0;
		 break;
		}
	}
	if(t) printf("%d为素数\n",x);
	else  printf("%d不为素数\n",x); 
	return 0;
}