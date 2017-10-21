#include <stdio.h>
int main(int argc, char *argv[])
{
	int a=1,b=0;
	switch(a)
	{
		case 1:switch(b)
			{
				case 0:printf("***\n");break;
				case 1:printf("@@@\n");break;
			}
		case 2:printf("$$$\n");break;
		default:printf("###\n");		
	}
	return 0;
}