#include <stdio.h>
void f1(int n) 
{
	int i;
	for(i=2;n%i;i++);
	if(n==i)
		printf("%d\t",n);	
}
int main (void)
{
	int i;
	f1(2);
	for(i=3;i<500000;i+=2)
		f1(i);
}
