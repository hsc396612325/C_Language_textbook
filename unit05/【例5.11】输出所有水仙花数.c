#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,m1,m2,m3;
	for(i=100;i<1000;i++)
	{
		m1=i%10;
		m2=i/10%10;
		m3=i/100;
		if(m1*m1*m1+m2*m2*m2+m3*m3*m3==i)
		printf("%d\t",i);
	}
	printf("\n");
	return 0;
}