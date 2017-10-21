#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100
int main(void)
{
	FILE *fb;
	char filname[LEN];
	int fno,fsize;
	char ch;
	printf("请输入要打开文件的完整路径:");
	gets(filname);
	fb=fopen(filname,"rt");//只读文件
	if(fb==NULL)
	{
		printf("打开文件失败\n");
		exit(1);
	} 
	fno=fileno(fb);
	fsize=filelength(fno);
	printf("文件打开成功！\n");
	printf("文件大小为：%d\n",fsize);
	printf("文件内容为：\n");
	while((ch=fgetc(fb))!=EOF)//输出 
		printf("%c",ch);
	fclose(fb);
	printf("\n");
} 