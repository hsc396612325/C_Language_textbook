#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	double sum=0;
	for(i=1;i<101;i++)
	{
		sum+=1.0/i;
	}
	printf("1+1/2+1/3+¡¤¡¤¡¤+1/100=%lf\n",sum);
	return 0;
}