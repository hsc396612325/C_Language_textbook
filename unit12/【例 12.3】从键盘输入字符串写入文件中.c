#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100
int main(void)
{
	FILE *fp;
	char filenme[LEN],date[LEN];
	int fno,fsize,i;
	char ch;
	printf("请输入要打开文件的完整路径及文件名：");
	gets(filenme);
	fp=fopen(filenme,"a+");//以追加形式打开文件
	if(fp==NULL) 
	{
		printf("打开文件失败\n");
		exit(1);
	} 
	fno=fileno(fp);
	fsize=filelength(fno);
	printf("文件已打开，大小为：%d\n",fsize);
	printf("文件内容为：\n");
	while((ch=fgetc(fp))!=EOF)//读 
		printf("%c",ch);
	printf("请输入要输入的数据：\n");
	gets(date);
	for(i=0;date[i];i++)//写入文件中 
		fputc(date[i],fp);
	fclose(fp);
		
	fp=fopen(filenme,"rt"); //fp重新赋值 
	if(fp==NULL) 
	{
		printf("打开文件失败\n");
		exit(1);
	} 
	while((ch=fgetc(fp))!=EOF)//读 
		if(ch!=' ') 
		printf("%c",ch);
	printf("\n");
	fclose(fp);	
	
}
 