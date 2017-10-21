#include <stdio.h>
#define N 32
int main(int argc, char *argv[])
{	
	int n,j=1,num=0;
	int f=1; 
	printf("请输入一串二进制字符："); 
	scanf("%d",&n);
	while(n!=0)
	{	if(n%10!=0&&n%10!=1)
		{
			f=0;
			break; 
		}
		num+=(n%10)*j; /*思路：新num=旧num+n%10*2的i(循环次数)次方*/ 
		n=n/10;       /*sum+=pow(2*(n%10),i);错误：0的0次方为1*/
		j*=2;		  /*j=1,j*=2实现2的i次方*/ 
	} 
	if(f)
		 printf("%d\n",num);
	else
		printf("输入的不是二进制！\n");
	return 0;
}