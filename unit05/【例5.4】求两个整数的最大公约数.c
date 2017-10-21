#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,m,r,a,b,i;
	printf("请输入两个整数");
	scanf("%d%d",&a,&b);
	m=a>b?a:b;  
	n=a>b?b:a;
	r=m%n;
	i=0;
	while(r!=0)
	{
		m=n;
		n=r;
		r=m%n;
		i++;
	}
	 printf("最大公约数为：%d,循环%d次\n",n,i);
	return 0;
}
/*算法：辗转相除法。两个整数的最大公约数等于其中较小(n)的数和两数的
余数(r)的最大公约数*/
/*例：14和2。m=14,n=2,r=0,所以最大公约数=n%0
      24和5.m=24,n=5,r=4,,i=1继续循环
	        m=5,n=4,r=1,i=2继续循环
			m=4,n=1,r=0 循环停止。输出1*/ 