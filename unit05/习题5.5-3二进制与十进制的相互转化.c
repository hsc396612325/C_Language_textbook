#include <stdio.h>
#include <math.h>
#define N 32
int main(int argc, char *argv[])
{
	char ch;
	int n,j=1,num=0,f=1;
	int i,arr[N]={0},t;
	printf("如果是二进制转十进制输入E，如果是十进制转二进制输入S：");
	scanf("%c",&ch);
	if(ch=='E')   /*二进制转十进制*/ 
	{ 
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
	}
	else if(ch=='S')/*十进制转而二进制 */ 
	{
		printf("请输入一个整数：\n");
		scanf("%d",&n);
		t=n;
		for(i=0;n!=0;i++)
		{
			arr[i]=fabs(n%2); 	  /*计算原码*/ 
			n/=2;
		}
		if(t>=0)
		{
			for(j=N-1;j>=0;j--)	 /*如果为正输出原码*/ 
			{
				printf("%d",arr[j]);
				if(j%8==0)printf(" ");
			}
		}
		if(t<0)				   /*如果为负输出补码*/ 
		{
			printf("1");      /*补码最高位为1*/ 
			for(j=N-2;j>0;j--)
			{
				if(arr[j]==0)
					printf("1"); /*中间取反*/ 
				else
					printf("0");
				if(j%8==0)printf(" ");
			}
			printf("%d",arr[0]); /*第一位不变*/ 
		}
		printf("\n");	
		}
	else
		printf("输入错误！"); 
	return 0;
}