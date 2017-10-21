#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y,min;
	scanf("%d %d",&x,&y);
	if(x>y)
		{
		 min=y;
		 printf("min=%d\n",min);
		}
	else
		{
		 min=x;
		 printf("min=%d\n",min);
		}
	return 0;
}