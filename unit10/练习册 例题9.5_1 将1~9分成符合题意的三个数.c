#include <stdio.h> 
int f1(int m)
{
	int k,t;
	int a[10]={0};
	for(k=1;k<4;k++)
	{
		t=m*k;
		while(t)
		{
			a[t%10]++;
			t=t/10;
		}
	}
	for(k=1;k<10;k++)
		if(a[k]!=1)
			return 0;
	return 1;
}
int main(void)
{
	int m,count=0;
	for(m=123;m<329;m++)
		if(f1(m))
			printf("No.%d %d %d %d\n",++count,m,2*m,3*m);
}   