#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	double a=3,b=2;
	double sum=0;
	for(i=0;i<20;i++)
	{
		sum+=a/b;
		a=a+b;
		b=a-b;
	}
	printf("3/2+5/3+8/5+13/8+¡¤¡¤¡¤Ç°20ÏîÎª=%lf\n",sum); 
	return 0;
}