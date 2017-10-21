#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=3,j;
	int x=3,y;
	j=(i++)+(i++)+(i++);
	printf("%d\n",j); 
	y=(++x)+(++x)+(++x);
	printf("%d\n",y);
	return 0;
}