#include <stdio.h>
int main(void)
{
	int x,y,z;
	for(x=0;x<17;x++)
	{
		for(y=0;y<26;y++)
		{
			for(z=0;z<31;z++)
				if(x+y+z==30&&3*x+2*y+z==50)
					printf("%-3d%-3d%-3d\n",x,y,z);
		}
	}
	return 0;
}
