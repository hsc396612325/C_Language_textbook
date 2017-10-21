#include <stdio.h>
int main(void)
{
	int x,y,z;
	for(x=0;x<17;x++)
	{
		y=20-2*x;
		z=30-x-y;
		if(y>=0&&3*x+2*y+z==50)
		printf("%-4d%-4d%-4d\n",x,y,z);
	}
	return 0;
}
