#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			for(k=0;k<100;k++)
				if(5*i+3*j+k/3.0==100&&i+j+k==100&&k%3==0)
					printf("¹«¼¦%-2d,Ä¸¼¦%-2d,Ð¡¼¦%-2d\n",i,j,k);
	return 0;
}