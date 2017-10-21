#include <stdio.h>
int main(int argc, char *argv[])
{
	double x,y,z,min;
	scanf("%lf %lf %lf",&x,&y,&z);
	if(x>y)
	{
		if(y>z)
			min=z;
		else
			min=y;
	}
	else
	{
		if(x>z)
			min=z;
		else
			min=x;		
	}
	printf("min=%g\n",min);
	return 0;
}