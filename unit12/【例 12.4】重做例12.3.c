#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <io.h>
#define LEN 100
int main(void)
{
	FILE *fp;
	char filename[LEN],date[LEN],temp[LEN];
	int fno,fsize,i;
	char ch;
	printf("请输入要打开文件的完整路径和文件名：");
	gets(filename);
	fp=fopen(filename,"a+");
	if(fp==NULL)
	{
		printf("\n打开文件失败");
		exit(1); 
	} 
	printf("\n文件内容：");
	while((fgets(temp,LEN,fp))!=NULL)
		printf("%s\n",temp);
	printf("\n请输入要添加的数据：");
	gets(date);
	fputs(date,fp);
	fclose(fp);//进行写的操作后，一定要进行关闭 
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("打开文件失败！\n");
		exit(1);
	}
	printf("\n文件内容：");
	while((fgets(temp,LEN,fp))!=NULL)
		printf("%s\n",temp);
	fclose(fp);
	printf("\n");	
} 