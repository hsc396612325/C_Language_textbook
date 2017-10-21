#include <stdio.h>
#include <string.h>
#define N 32
int main(int argc, char *argv[])
{	
 	char g[N];
 	int i,num=0;
 	scanf("%s",g);
 	for(i=0;i<strlen(g);i++)
 	{
	  num=num*2+(g[i]-'0');		/*计算对应10进制数*/ 
	  if(g[i]!='0'&&g[i]!='1')	/*判断输入是否正确*/ 
			break;
    }
    if(i==strlen(g))
		printf("%d\n",num);
	else
		printf("输入有误！\n");
}
