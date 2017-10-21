#include <stdio.h>
int prime(int n)
{
	int i;
	for(i=2;n%i;i++);
	if(i==n)
		return 1;
	return 0;
}
void f1(int n)
{
	int m=0;
	m=n%10*10+n/10;
	if(prime(n)&&prime(m))
		printf("%d ",n);	
}
int main (void)
{
	int i;
	for(i=10;i<100;i++)
		f1(i);
}