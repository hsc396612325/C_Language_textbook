#include <stdio.h>
union int_st
{
	int k;
	char ch[2];
};
int main(void)
{
	union int_st x;
	x.ch[0]='M';
	x.ch[1]='n';
	printf("k=%d\nk=%X\n",x.k,x.k);
}
