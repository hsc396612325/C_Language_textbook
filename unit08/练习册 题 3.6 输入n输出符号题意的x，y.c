#include <stdio.h>
int pow3(int x,int y)
{
	int i,last=1;
	for(i=1;i<y;i++)
		last=last*x%1000;
	return last;
}
int main(void)
{
	int x,n,min;
	printf("ÇëÊäÈënÖµ£º\n");
	scanf("%d",&n);
	for(min=2;;min++)
	{
		for(x=1;x<min;x++)
			if(x!=min-x&&pow3(x,n)==pow3(min-x,n))
			{
				printf("x=%d£¬y=%d\n",x,min-x);
				exit(0);
			}
	}	
}