#include <stdio.h>
#define N 10
int main(int argc, char *argv[])
{
	int i,min,x;
	scanf("%d",&min);
	for(i=1;i<=N-1;i++)
	{
		scanf("%d",&x);
		min=min<x?min:x;
	}
	printf("%d\n",min);
	return 0;
}