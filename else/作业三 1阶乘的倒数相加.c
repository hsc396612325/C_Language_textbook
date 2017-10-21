#include <stdio.h>
int main(void)
{
	int i,n=1;
	double m=0;
	for(i=1;i<6;i++)
	{
		n=n*i;
		m=m+1.0/n;
	}
	printf("1~5½×³Ëµ¹ÊýÖ®ºÍ=%lf\n",m);
}