#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int k,a,b,c;
	printf("请输入三角形三边");
	k=scanf("%d%d%d",&a,&b,&c);
	if(k!=0)
		{if(a<0||b<0||c<0||a+b<c||a+c<b||b+c<a)
			printf("输入的数据无法构成三角形");
		else
 			{if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
  			 printf("是直角三角形");
			else
  			 printf("不是直角三角形"); 
			}
		}
	else printf("输入数据有误");
	return 0;
}