#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int a[]={0,4564,654,6,54,64,61,5,1654,3,1,2,5,645,644};
	int i,js=0;
	int len=sizeof(a)/sizeof(int);//sizeof：返回一个对象或者类型所占字节。 
	for(i=0;i<len;i++)
		js=js+a[i]%2;
	printf("偶数有%d个，奇数有%d个。\n",len-js,js);
	return 0;
}