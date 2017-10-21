#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#define LEN 100
void main()
{
	FILE *fp;
	char filename[LEN];
	int fno,fsize;
	printf("请输入要打开文件的完整路径及文件名：");
	gets(filename);
	fp=fopen(filename,"r");//打开文件 
	if(fp==NULL)
	{
		printf("\n打开文件失败，%s可能不存在\n",filename);
		exit(1);
	} 
	fno=fileno(fp);//取得关键字 
	fsize=filelength(fno);//计算的大小
	printf("文件打开成功,大小为：%d",fsize); 
	fclose(fp);
} 