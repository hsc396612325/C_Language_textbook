#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,k;
	k=scanf("%d",&x);
	if(k==0)
	{
		printf("ÊäÈë´íÎó!\n");exit(1);
	}
	if(x%100!=0&&x%4==0||x%400==0)
		printf("yes\n");
	else
		printf("no\n"); 
	return 0;
}