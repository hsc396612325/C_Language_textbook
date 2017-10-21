#include <stdio.h>
#define N 2
int main(int argc, char *argv[])
{
	int a=N,i,sum=0;
	for(i=0;i<7;i++)
	{
	 sum=sum+a;
	 a=a*10+N;	
	}
	printf("2+22+222+2222+¡¤¡¤¡¤Ç°ÆßÏîºÍ=%d\n",sum);
	return 0;
}