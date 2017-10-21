#include <stdio.h>
int main (void)
{
	int a,b,c,d;
	for(a=1;a<5;a++)
		for(b=1;b<5;b++)
			{
				if(a==b)
					continue;
				for(c=1;c<5;c++)
				{
					if(c==a||c==b)//a,b,c分别从1递加到4，同时跳过a,b,c相同的项 
						continue;
					d=10-a-b-c;//b可以不用循环 
					if((a==1)!=(b==2)&&(c==1)!=(d==3)&&(d==2)!=(a==3))//找出符合条件的组合 
					printf("a=%d,b=%d,c=%d,d=%d\n",a,b,c,d);
				}
		
			}
}