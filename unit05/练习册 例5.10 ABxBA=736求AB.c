#include <stdio.h>
int main(int argc, char *argv[])
{
	int A,B;
	for(A=1;A<10;A++)
		for(B=1;B<10;B++)
		if((A*10+B)*(A+10*B)==736)
			printf("A=%d,B=%d\n",A,B);
	return 0;
}