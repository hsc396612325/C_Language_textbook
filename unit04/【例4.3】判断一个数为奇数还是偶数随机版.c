#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
	int a,k;
	srand((unsigned)time(NULL));
	a=rand()%1234+0;
	if(a%2==0)printf("%dÅ¼Êı\n",a);
	else printf("%dÆæÊı\n",a);
	return 0;
}