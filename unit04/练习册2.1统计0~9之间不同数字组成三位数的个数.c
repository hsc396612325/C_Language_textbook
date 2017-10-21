#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,j,k,count;
	for(i=1;i<9;i++)
		for(j=0;j<9;j++)
			if(i==j) continue; /*如果i=j则终止此次循环，继续下一循环*/ 
			else
				for(k=0;k<9;k++)
					if(k!=i&&k!=j)count++;/*如果k同时不等于i j则记为一次*/ 
	printf("次数为=%d\n",count); 
	return 0;
}