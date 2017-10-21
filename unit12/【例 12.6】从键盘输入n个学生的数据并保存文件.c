#include <stdio.h>
#include <stdlib.h>
#define N 5
struct stu
{
	char num[20];
	char name[40];
	char sex[5];
}clas[N],a[N];
int main(void)
{
	FILE *fp;
	int i;
	printf("\请输入该学生的信息：\n");
	fp=fopen("class_list.txt","wt");
	if(fp==NULL)
	{
		printf("文件打开失败！\n");
		exit(1);
	} 
	for(i=0;i<N;i++)
	{
		printf("请输入学号：");
		gets(clas[i].num);
		printf("请输入姓名：");
		gets(clas[i].name);
		printf("请输入性别：");
		gets(clas[i].sex);
		fprintf(fp,"%s %s %s\n",clas[i].num,clas[i].name,clas[i].sex);
	}
	fclose(fp);
	fp=fopen("class_list.txt","rt");
	printf("该班数据为：\n");
	printf("姓名\t姓名\t性别\n");
	i=0;
	while(fscanf(fp,"%s %s %s\n",a[i].num,a[i].name,a[i].sex)!=EOF)
	{
		printf("%s\t%s\t%s\n",a[i].num,a[i].name,a[i].sex);
		i++;
	}
	fclose(fp);
	return 0;	
} 