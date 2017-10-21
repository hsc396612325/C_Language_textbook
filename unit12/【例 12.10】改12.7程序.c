#include<stdio.h>
#define N 5
struct stu
{
	char num[20];
	char name[20];
	char sex[5];
}studen[N],a[N];

int main(void)
{
	FILE *fp;
	int i;
	printf("请输入该班的数据：\n");
	fp=fopen("class_list_2.txt","wt");
	if(fp==NULL)
	{
		printf("无法打开文件！\n");
		exit(1); 
	}
	for(i=0;i<N;i++)
	{
		printf("请输入学号:");
		gets(studen[i].num);
		printf("请输入姓名:");
		gets(studen[i].name);
		printf("请输入性别:");
		gets(studen[i].sex);
		fwrite(&studen[i],sizeof(struct stu),1,fp); 
	}
	fclose(fp);
	fp=fopen("class_list_2.txt","rt");
	printf("该班数据为：\n");
	printf("姓名\t姓名\t性别\n");
	i=0;
	while(!feof(fp))
	{
		fread(&a[i],sizeof(struct stu),1,fp);
		printf("%s\t%s\t%s\n",a[i].num,a[i].name,a[i].sex);
		i++;
	}
	fclose(fp);
	return 0;	
} 