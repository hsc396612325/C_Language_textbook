#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,num,s=0,n;
	printf("«Î ‰»În:"); 
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		num=0;
		for(j=1;j<=i;j++)
			num+=j;
		s+=num; 
	}
	printf("S=1+(1+2)+(1+2+3)+~+(1+2+3+~+n)=%d\n",s);
	return 0;
}