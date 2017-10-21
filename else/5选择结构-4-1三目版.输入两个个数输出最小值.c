#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y,min;
	scanf("%d %d",&x,&y);
	min=x>y?y:x;
	printf("min=%d\n",min);
	return 0;
}