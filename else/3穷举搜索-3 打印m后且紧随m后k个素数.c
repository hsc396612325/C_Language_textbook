#include <stdio.h>
int main(int argc, char *argv[])
{
	int m,k,i,j,t=0;
	printf("«Î ‰»Îm∫Õk:");
	scanf("%d %d",&m,&k);
	for(i=m+1;t<k;i++)
	{
		for(j=2;j<i;j++)
			if(i%j==0)
				break;
		if(i==j)
		{
			printf("%d\t",i);
			++t;
		}
	}
	printf("\n");
	return 0;
}