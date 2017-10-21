#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	FILE *fp;
	char ch,str[20];
	fp=fopen("class_list.txt","at+");
	if(fp==NULL)
	{
		printf("不能打开文件！\n");
		exit(1);
	}
	printf("请输入一个字符串：\n");
	gets(str);
	fwrite(str,strlen(str),1,fp);
	rewind(fp);//不用关闭文件
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	} 
	printf("\n");
	fclose(fp);
} 