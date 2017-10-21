#include <stdio.h>
int main (void)
{
	int sp[4]={4,5,6,7};
	int *p[4]={&sp[0],&sp[1],&sp[2],&sp[3]};
	int **q;
	for(q=p;q<p+4;q++)
		printf("%3d",**q);
	printf("\n");
	return 0;
}