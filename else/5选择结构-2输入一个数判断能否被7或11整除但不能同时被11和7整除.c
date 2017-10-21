#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,k;
	k=scanf("%d",&x);
	if(k==0)
	{
		printf("ÊäÈë´íÎó!\n");exit(1);
	}
	if((x%7==0||x%11==0)&&x%77!=0)
		printf("yes\n");
	else
		printf("no\n"); 
	return 0;
}