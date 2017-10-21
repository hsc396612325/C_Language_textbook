#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
	char name[20];
	int iNumber;
	struct Student *next;
};
int iCound;
struct Student *Create()
{
	struct Student *pHead=NULL,*pNew,*pEnd;
	iCound=0;
	pNew=(struct Student *)malloc(sizeof(struct Student));
	printf("请输入姓名和学号(学号输零时停止输入)：\n");
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	while(pNew->iNumber!=0)
	{
		iCound++;
		if(iCound==1)
			pHead=pNew;
		else
			pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
		
		pNew=(struct Student *)malloc(sizeof(struct Student));
		scanf("%s",pNew->name);
		scanf("%d",&pNew->iNumber); 
	} 
	free(pNew);
	return pHead; 
}
void print(struct Student *pHead)
{
	int iIndex=1;
	printf("\n名单中有%d个学生\n",iCound);
		printf("编号\t姓名\t学号\n");
	while(pHead!=NULL)
	{
		printf("%d\t%s\t%d\n",iIndex,pHead->name,pHead->iNumber);
		iIndex++;
		pHead=pHead->next; 
	}
}
void Delete(struct Student *pHead)
{
	struct Student *pt;
	char name[20];
	printf("输入你要删除学生的姓名：");
	scanf("%s",name);
	while(pHead->next&&strcmp(pHead->name,name)) 
	{
		pt=pHead;
		pHead=pHead->next;
	}
	if(strcmp(pHead->name,name)!=0)
		printf("查无此人!");
	else
	{
		pt->next=pHead->next;
		free(pHead);
		iCound--;
	}	 
}
int main(void)
{
	struct Student *pHead;
	pHead=Create();//创建新链表;
	print(pHead); 
	fflush(stdout);//删除 
	Delete(pHead);
	print(pHead); 
}