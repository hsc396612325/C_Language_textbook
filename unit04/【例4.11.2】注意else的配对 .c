#include <stdio.h>
int main(int argc, char *argv[])
{
	int x=2,y=-1,z=2;
	if(x>y)
	{	
		if(y>0) z=0;
	}
	else z+=1;
	printf("z=%d\n",z);
	return 0;
}