#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	int abcd,ab,cd;
	for(a=1;a<10;a++)
		for(b=0;b<10;b++)
			for(c=0;c<10;c++)
				for(d=0;d<10;d++)
				{
					abcd=a*1000+b*100+c*10+d;
					ab=a*10+b;
					cd=c*10+d;
					if(abcd==(ab+cd)*(ab+cd))
						printf("%d\n",a*1000+b*100+c*10+d);					
				}
}					