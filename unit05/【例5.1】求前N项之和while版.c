#include <stdio.h>
#define N 200
int main(int argc, char *argv[])
{
	int x=1,sum=0;
	while(x<=N)
	{
		sum+=x;
		x++;
	}
	printf("%d\n",sum);
	return 0;
}