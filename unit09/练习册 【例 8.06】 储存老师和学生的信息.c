#include <stdio.h>
struct type
{
	char id[20];
	char name[20];
	char job[10];
	union
	{
		int grade;
		char position[20];
	}level;
}person[50];
int main(void)
{
	int n,i;
	printf("你需要输入多少个学生/老师信息\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)//输入 
	{
		printf("请输入学号/工号：");
		scanf("%s",person[i].id);
		printf("请输入姓名：");
		scanf("%s",person[i].name);
		printf("请输入职位(student/teacher)：");
		scanf("%s",person[i].job);
		if(strcmp(person[i].job,"student")==0)
		{
			printf("请输入年级：");
			scanf("%d",&person[i].level.grade); 
		} 
		else if(strcmp(person[i].job,"teacher")==0)
		{
			printf("请输入职称：");
			scanf("%s",person[i].level.position); 
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		printf("学号\\工号\t姓名\t职位\t年级\\职称\n");
		printf("%s\t\t%s\t%s\t",person[i].id,person[i].name,person[i].job);
		if(strcmp(person[i].job,"student")==0)
			printf("%d\n",person[i].level.grade);
		else if(strcmp(person[i].job,"teacher")==0)
			printf("%s\n",person[i].level.position);
		
	} 
	return 0;	
}