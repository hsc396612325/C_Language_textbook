#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	double PI=1,i,j,num;
	for(i=1;fabs(num)>1e-9;i++)
	{
		num=1;
		for(j=1;j<i+1;j++)
			num*=j/(2*j+1);
		PI+=num;
	}
	printf("PI=%lf\n",2*PI);
	return 0;
}