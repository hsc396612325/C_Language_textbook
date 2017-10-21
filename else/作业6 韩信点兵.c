#include <stdio.h>
int main(void)
{
	int i,j=10;
	for(i=0;j!=1;i++)
		for(j=10;j>1;j--)
			if(i%j!=j-1)
				break;
	printf("%d¸öÈË\n",i-1);
	return 0;	
}