#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,k;
	k=scanf("%d",&x);
	if(k==0)
	{
		printf("ÊäÈë´íÎó!\n");exit(1);
	}
	if(x%5==0&&x%3==0)
		printf("yes\n");
	else
		printf("no\n"); 
	return 0;
}