#include <stdio.h>

int main(void)
{
	int a[10]={-5,0,4,9,45,77,91,120,410,450};
	int b[10]={-44,-7,-5,14,55,80,220,510,560,1111};
	int c[20],i=0,j=0,k=0;
	for(i=0;i<20;i++)
	{
		if(a[j]<b[k])
		{
			c[i]=a[j];
			if(j<10)
				j++;			
		}
		else
		{
			c[i]=b[k];
			if(k<10)
				k++;
		}
	}
	for(i=0;i<20;i++)
		printf("%-5d",c[i]);
}