#include <stdio.h>
int main(int argc, char *argv[])
{
	int t1=1,t2=2,t3=4,t,i;
	for(i=4;i<=36;i++)
	{
		t=t1+t2+t3;
		t1=t2;
		t2=t3;
		t3=t; 
	}
	printf("一共有%d种方法\n",t);
	return 0;
}