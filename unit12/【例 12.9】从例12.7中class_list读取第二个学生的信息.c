	#include<stdio.h>
#include<stdlib.h>
struct stu
{
	char num[20];
	char name[20];
	char sex[5];
}q;

int main(void)
{
	FILE *fp;
	int i=1;
	fp=fopen("class_list_2.txt","rt");
	if(fp==NULL)
	{
		printf("文件打开失败！\n");
		exit(1);
	}
	fseek(fp,i*sizeof(struct stu),0);
	fread(&q,sizeof(struct stu),1,fp);
	printf("姓名\t姓名\t性别\n");
	printf("%s\t%s\t%s\n",q.num,q.name,q.sex);
	
} 