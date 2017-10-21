#include <stdio.h>
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return z;
}
int main (void)
{
	int a,b,m;
	scanf("%d %d",&a,&b);
	m=max(a,b);
	printf("%d\n",m);
}