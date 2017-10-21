#include <stdio.h>
int a[9];//前三位存m，中三位存2*m，后三位存3*m 
int sh(int x,int *y)
{
	int *p1,*p2;
	for(p1=y;p1<y+3;p1++)
	{
		*p1=x%10;
		x/=10;
		for(p2=a;p2<p1;p2++)
			if(*p1==0||*p2==*p1)//查看之前是否有重复的或者0 
				return 0;
	}
	return 1;	
} 
int main(void)
{
	int m,count=0;
	for(m=123;m<329;m++)
		if(sh(m,a)&&sh(2*m,a+3)&&sh(3*m,a+6))
			printf("No.%d %d %d %d\n",++count,m,2*m,3*m);
} 