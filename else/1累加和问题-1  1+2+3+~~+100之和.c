#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,sum=0;
	for(i=1;i<101;i++)
	{
		sum+=i;
	}
	printf("1+2+3+¡¤¡¤¡¤+100=%d\n",sum); 
	return 0;
}