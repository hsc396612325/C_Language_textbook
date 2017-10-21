#include <stdio.h>
enum color {red,yellow,blue};
int main(void)
{
	enum color b[3];
	int j,t=0;
	for(b[0]=red;b[0]<=blue;b[0]++)
		for(b[1]=red;b[1]<=blue;b[1]++)
			for(b[2]=red;b[2]<=blue;b[2]++)
			  if(b[0]!=b[1]&&b[0]!=b[2]&&b[1]!=b[2])
			  {
				t++;
				printf("No.%02d:",t);
				for(j=0;j<3;j++)
				{
					switch (b[j])
					{
						case red:printf("ºì");break;
						case yellow:printf("»Æ");break;
						case blue:printf("À¶");break; 
					}
				}				
				if(t%5==0)
					printf("\n");
				else 
					printf("\t");
			}
}
