#include <stdio.h>
#include <string.h>

int main(void) 
{
	char k[20],s[3][10];
	int b[3]={0},i,j;
	printf("输入3位候选人的名字：\n");
	for(i=0;i<3;i++)
		gets(s[i]);
	printf("输入三位候选人的得票情况：\n");
	for(i=0;i<6;i++)
	{
		gets(k);
		for(j=0;j<3;j++)
			if(!strcmp(s[j],k))
				b[j]++;
	}
	printf("得票情况如下:\n");
	for(i=0;i<3;i++)
		printf("%s:%d ",s[i],b[i]);
	return 0;
}