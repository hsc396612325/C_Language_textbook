#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c,x;
	while(scanf("%d%d%d",&a,&b,&c)!=EOF)
	{
		if(a<b)
			{x=a;a=b;b=x;}
		if(a<c)
			{x=a;a=c;c=x;}
		if(b<c)
			{x=b;b=c;c=x;}		
		printf("%d %d %d\n",a,b,c); 
	}
	return 0;
}