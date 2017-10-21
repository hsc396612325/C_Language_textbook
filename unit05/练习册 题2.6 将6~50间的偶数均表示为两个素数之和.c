/*将6~50间偶数用素数表示*/
/*思路先找一个小于m的素数n，在判断m-n是否为素数*/  
/*易错点：12.16的空语句*/ 
#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,n,i,j;
	for(m=6;m<51;m+=2)
	{
		for(n=2;n<m;n++)		
		{
			for(i=2;n%i;i++)			/*11~13判断n是否为素数*/	
				;
			if(n==i)
			{
				for(j=2;(m-n)%j;j++)	/*15~17判断m-n是否为素数*/
					;
				if(m-n==j)
				{
				printf("%d=%d+%d\n",m,n,m-n);/*n和m-n均为素数是输出，否则进行下一轮循环*/ 
				break;						/*break是退出第九行循环*/	
				}	
			}
		
		}
	}
	return 0;
}
