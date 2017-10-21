#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	short *s;
	double *f=(double *)malloc(sizeof(double));
	printf("指针f所指向的内存空间的首地址：%X\n",f);
	printf("指针f所指向的内存空间所占用内存的大小：%d\n",sizeof(*f)); 
	s=(short *)realloc(f,sizeof(s));//???·???????? ??
	printf("指针s所指向的内存空间的首地址：%X\n",s);
	printf("指针s所指向的内存空间所占用内存的大小：%d\n",sizeof(*s));
}