#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int *iIntMalloc=(int *)malloc(sizeof(int));
	*iIntMalloc=100;
	printf("%d\n",*iIntMalloc); 
}