#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y;
	printf("«Î ‰»Îx÷µ\n");
	scanf("%d",&x);
	if(x<10)
		printf("y=%d\n",x+1);
	else if(x>=10&&x<20)
		printf("y=%d\n",x*x);
	else
		printf("y=%d\n",6*x+9); 
	return 0;
}