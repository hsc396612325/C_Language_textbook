#include <stdio.h>
int main(int argc, char *argv[])
{
	int x=1,y=2,z;
	z=x>y?++x:--y;
	printf("x=%d,y=%d,z=%d\n",x,y,z);
	return 0;
}