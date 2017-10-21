#include <stdio.h>
void f1(int n)
{
	int i,j,k;
	i=n%10;
	j=n/10%10;
	k=n/100;
	if(n==i*i*i+j*j*j+k*k*k)
		printf("%d ",n);
}
int main (void)
{
	int i;
	for(i=100;i<1000;i++)
		f1(i);
}