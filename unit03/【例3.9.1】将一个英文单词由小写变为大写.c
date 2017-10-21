#include <stdio.h>
int main(int argc, char *argv[])
{
	char a,b,c,d,e,f,g,h,i,j;
	scanf("%c%c%c%c%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	printf("%c%c%c%c%c%c%c%c%c%c",a-32,b-32,c-32,d-32,e-32,f-32,g-32,h-32,i-32,j-32);
	return 0;
}