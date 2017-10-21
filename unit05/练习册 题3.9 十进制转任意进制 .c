#include <stdio.h>
#include <math.h>
#define N 32
int main(int argc, char *argv[])
{
	int i,j,n,arr[N]={0},t;
	char ch;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	printf("想转成什么进制？二进制输E，八进制输B,十六进制输S："); 
	scanf("%c",&ch);
	if(ch=='B')			//转八进制 
		printf("%O",n);
	else if(ch=='S')	//转十六进制 
		printf("%X",n);
	else if(ch=='E')  //转二进制 
	{ 
		t=n;
		for(i=0;n!=0;i++)
		{
			arr[i]=fabs(n%2); 	  //计算原码 
			n/=2;
		}
		if(t>=0)
		{
			for(j=N-1;j>=0;j--)	 //如果为正输出原码 
			{
				printf("%d",arr[j]);
				if(j%8==0)printf(" ");
			}
		}
		if(t<0)				   //如果为负输出补码 
		{
			printf("1");      //补码最高位为1
			for(j=N-2;j>0;j--)
			{
				if(arr[j]==0)
					printf("1"); //中间取反
				else
					printf("0");
				if(j%8==0)printf(" ");
			}
			printf("%d",arr[0]); //第一位不变 
		}	
		printf("\n");
	}
	else
		printf("输入错误！"); 
	return 0;
}