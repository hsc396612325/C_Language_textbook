#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,gw,bw,ww;
	for(i=100;i<1000;i++)
	{
		gw=i%10;
		bw=i/10%10;
		ww=i/100;
		if(gw*gw*gw+bw*bw*bw+ww*ww*ww==i)
			printf("%d\t",i);
	}
	printf("\n");
	return 0;
}