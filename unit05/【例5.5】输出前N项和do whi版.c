#include <stdio.h>
#define N 200
int main(int argc, char *argv[])
{
	int sum=0,i=1;
	do
	{
		sum+=i;
		i++;
	}
	while(i<=N);
	printf("%d\n",sum);
	return 0;
}