#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k;
	printf("一元换50枚一份.两分.五分硬币，一共有以下种可能：\n");
	for(k=1;k<=20;k++)
			{
				i=3*k;
				j=50-4*k;
				if(j<0)continue;
				if(i+2*j+5*k==100)
				printf("一分%2d枚，两分%2d枚，五分%2d枚\n",i,j,k);
				
			}
	return 0;
}