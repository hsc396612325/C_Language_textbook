#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	double a=-3,b=2;
	printf("%3.0f %3.0f",pow(b,fabs(a)),pow(a,fabs(b)));
	return 0;
}
/*pow(x,y)=xµÄy´Î·½£»fabs£¨x£©=|x|*/