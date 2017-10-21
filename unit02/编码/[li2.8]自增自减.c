#include <stdio.h>
int main(int argc, char *argv[])
{
	int i=3,j=10,m,n,p,q;
	m=++i;     /*先加再用，i=4，m=4*/
	n=i++;     /*先用在加，n=4，i=5*/
	p=--j;     /*先减在用，j=9，p=9*/  
	q=j--;     /*先用在减，q=9，j=8*/
	printf("i=%d,j=%d,m=%d,n=%d,p=%d,q=%d\n",i,j,m,n,p,q); 
	return 0;
}