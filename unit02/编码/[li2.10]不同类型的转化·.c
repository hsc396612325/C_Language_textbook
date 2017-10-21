#include <stdio.h>
main()
{
	int i=5;
	float a=242.15,b;
	double c=123456789.456123;
	char d='B';
	unsigned char e;
	printf("i=%d,a=%f,c=%lf ,d=%c,d=%d\n",i,a,c,d,d);
	b=i;/*将int赋值給float*/
	i=a;/*将float赋值int*/ 
	a=c;/*将double赋值int*/
	d=i;/*将int赋值给double*/
	e=d;
	printf("i=%d,a=%f,b=%f,d=%c,d=%d,e=%c,e=%d\n",i,a,b,d,d,e,e); 
}