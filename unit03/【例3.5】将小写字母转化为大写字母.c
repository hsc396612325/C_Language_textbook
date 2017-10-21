#include <stdio.h>
int main(int argc, char *argv[])
{
	char ch;
	ch=getch();
	printf("%c\n",ch+32);
	putchar(ch+32);
	putchar('\n');
	return 0;
}