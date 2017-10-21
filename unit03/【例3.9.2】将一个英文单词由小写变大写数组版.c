#include <stdio.h>
#include <string.h>
#define N 20
int main(int argc, char *argv[])
{
	int i;
	char a[N];
	scanf("%s",a);
	for(i=0;i<strlen(a);i++) printf("%c",a[i]-32);
	printf("\n");
	return 0;
}