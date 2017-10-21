#include <stdio.h>

int f1_1(int i,int j)
{
	int t=1;
	for(;j>0;j--)
		t*=i;
	return t;	
}
void f1()
{
	int a=2,b=3;
	printf("f=%d\n",f1_1(a,b));
}

int m=13;
int f2_1(int x,int y)
{
	int m=3;
	return x*y-m;
}
void f2()
{
	int a=7,b=5;
	printf("%d\n",f2_1(a,b)/m);
}

int f3_1(int m)
{
	static int t=3;
	m+=t++;
	return m;
}
void f3()
{
	int  m,i,j;
	m=0;j=0;
	for(i=0;i<3;i++)
		j+=f3_1(m++);
	printf("%d\n",j);	
}

void f4_1(int *a,int b[])
{
	b[0]=*a+6;
}
void f4()
{
	int a,b[5];
	a=0;
	b[0]=4;
	f4_1(&a,b);
	printf("%d\n",b[0]);
}
int main(void)
{
	f1();
	f2();
	f3();
	f4();
	return 0;
}