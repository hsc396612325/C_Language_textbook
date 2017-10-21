#include <stdio.h>
int f(int n)//ËØÊıÅĞ¶Ï 
{
	int i;
	for(i=2;n%i;i++);
	if(n==i)
		return 1;
	return 0; 
} 
int main(void)
{
	int i,j;
	for(i=4;i<1001;i+=2)
	{
		for(j=2;j<i;j++)
			if(f(j)&&f(i-j))
			{
				printf("%d=%d+%d\t",i,j,i-j);
				break;
			}
	}
}