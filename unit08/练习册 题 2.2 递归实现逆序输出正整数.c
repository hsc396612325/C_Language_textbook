#include <stdio.h>
fun(int m)
{
	printf("%d",m%10);
	m=m/10;
	if(m>0)
		fun(m);
}
int main(void)
{
	int n;
	scanf("%d",&n);
	fun(n);
	printf("\n");
	return 0;
}