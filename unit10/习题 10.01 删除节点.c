#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

struct student
{
	char name[20];//姓名 
	char num[20];//学号 
	char classes[20];//班级 
	double score[3];//分数 
	double aver;//平均分
	struct student *next;//指针域 
}; 
int iCound;
void input_1(struct student *pNew)//输入节点的值 
{
	fflush(stdin);
	printf("请输入姓名：");
	gets(pNew->name);
	printf("请输入学号：");
	gets(pNew->num);
	printf("请输入班级：");
	gets(pNew->classes);
	printf("请输入三门课的成绩：");	
	scanf("%lf%lf%lf",&pNew->score[0],&pNew->score[1],&pNew->score[2]);
	pNew->aver=(pNew->score[0]+pNew->score[1]+pNew->score[2])/3.0;	
	printf("\n");
}
struct student *input()//创建链表 
{
	struct student *pHead=NULL,*pEnd,*pNew;
	iCound=0;
	pEnd=pHead=(struct student *)malloc(sizeof(struct student));
	pNew=(struct student *)malloc(sizeof(struct student));
	printf("姓名输入#时，停止输入\n");
	input_1(pNew);
	while(pNew->name[0]!='#')
	{
		iCound++;
		pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
		pNew=(struct student *)malloc(sizeof(struct student)); 
		input_1(pNew);
	}
	free(pNew);
	return pHead; 	
}
void output(struct student *pHead)//输出 
{
	int i=0;
	pHead=pHead->next;
	printf("名单内一共有%d个学生\n",iCound);
	printf("编号/排名\t姓名\t学号\t班级\t科目一\t科目二\t科目三\t平均分\n");
	while(pHead!=NULL)
	{
		printf("No.%d\t\t",++i);
		printf("%s\t%s\t%s\t",pHead->name,pHead->num,pHead->classes);
		printf("%.1lf\t%.1lf\t%.1lf\t",pHead->score[0],pHead->score[1],pHead->score[2]);
		printf("%.1lf\n",pHead->aver);
		pHead=pHead->next;
	}
}
void strike_out(struct student *pHead)//删除
{
	char a[20];
	struct student *pHead_1=pHead;
	printf("请输入你想删除学生的学号\n");
	scanf("%s",a);
	while(pHead&&strcmp(pHead->num,a))
	{
		pHead_1=pHead;
		pHead=pHead->next;
	}	
	if(pHead==NULL)
		printf("查无此人！\n");
	else
	{
		pHead_1->next=pHead->next;
		free(pHead);
		iCound--;
		printf("已删除！\n");
	}

}
int main(void)
{
	struct student *pHead;
	pHead=input();
	output(pHead);
	strike_out(pHead);
	output(pHead);
}