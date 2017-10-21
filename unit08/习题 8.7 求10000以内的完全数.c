#include <stdio.h>
void f(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
		if(n%i==0)
			sum+=i;
	if(n==sum)
		printf("%d\n",n);
}
int main(void)
{
	int i;
	for(i=1;i<=10000;i++)
		f(i);
	return 0;
}