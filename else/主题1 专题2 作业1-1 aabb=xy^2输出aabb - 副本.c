#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	for(i=1;i<10;i++)
	{
		for(k=31;k<100;k++)
		{
			j=k*k%10;
			if((i*1000+i*100+j*10+j==k*k)&&(i!=j))
				printf("%d\n",k*k);	
		}
	}
	return 0;
}