#include <stdio.h>
int max(int x,int y)
{
	int z;
	z=x>y?x:y;
	return(z);
}
int main (void)
{
	int a,b,c,m;
	scanf("%d%d%d",&a,&b,&c);
	m=max(max(b,c),a);
	printf("%d\n",m);
	return 0;
}