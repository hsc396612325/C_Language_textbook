#include <stdio.h>
union int_char
{
	char ch[2];
	int i;
};
void OutPut(union int_char x)
{
	printf("i=%d\ti=%X\n",x.i,x.i);
	printf("cho=%X\tch1=%X\n",x.ch[0],x.ch[1]);
	printf("ch0=%c\t,ch1=%c\t",x.ch[0],x.ch[1]);
}

int main (void)
{
	union int_char x;
	x.i=19788;
	OutPut(x);
}