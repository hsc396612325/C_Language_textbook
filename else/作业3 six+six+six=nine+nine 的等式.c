#include <stdio.h>
int main(void)
{
	int s,i,x,n,e;
	int six,nine;
	for(s=1;s<10;s++)
		for(i=0;i<10;i++)
			for(x=0;x<10;x++)
				for(n=1;n<10;n++)
					for(e=0;e<10;e++)
					{
						six=s*100+i*10+x;
						nine=n*1000+i*100+n*10+e*1;
						if(six+six+six==nine+nine)
						printf("%d+%d+%d=%d+%d\n",six,six,six,nine,nine);
					}
					
}