#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=1,j=1,k;
	k=(--i&&--j);
	printf("i=%d  j=%d  k=%d\n",i,j,k);
	i=0,j=1;
	k=(i--&&--j);
	printf("i=%d j=%d  k=%d\n",i,j,k);
	printf("&&左边为0时右边不再计算\n"); 
	/*&&左边为0时右边不再计算*/ 
	/*--前置先算再用，后置先用在算*/ 
	i=0,j=1;
	k=(++i||--j);
	printf("i=%d  j=%d  k=%d\n",i,j,k);
	i=1,j=1;
	k=(i--||--j);
	printf("i=%d  j=%d  k=%d\n",i,j,k);
	printf("||左边为1时右边不再计算\n");
	/*||左边为1时右边不再计算*/ 
	/*--前置先算再用，后置先用在算*/ 
	return 0;
}