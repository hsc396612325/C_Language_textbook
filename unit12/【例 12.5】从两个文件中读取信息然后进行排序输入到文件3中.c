#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void f1(char *p,char *q)
{
	FILE *fp;
	fp=fopen(p,"rt");
	if(fp==NULL)
	{
		printf("打开失败");
		return;
	}	
	while((fgets(q,100,fp))!=NULL);
	puts(q);
	fclose(fp);	
}
void f2(char *p,char *q)
{
	FILE *fp;
	fp=fopen(p,"wt+");
	if(fp==NULL)
	{
		printf("打开失败");
		return;
	}	
	fputs(q,fp);
	fclose(fp);	
	while((fgets(q,100,fp))!=NULL);
	puts(q);
	fclose(fp);	
}
int main(void)
{
	int i,j;
	char str1[100],str2[100],t;
	f1("str1.txt",str1);
	f1("str2.txt",str2);
	strcat(str1,str2);
	for(i=0;str1[i+1];i++)
		for(j=0;str1[j+i+1];j++)
			if(str1[j]>str1[j+1])
			{
				t=str1[j];
				str1[j]=str1[j+1];
				str1[j+1]=t;
			}
	f2("str3.txt",str1);
} 