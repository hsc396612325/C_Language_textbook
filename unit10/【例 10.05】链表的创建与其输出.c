#include <stdio.h>
#include <stdlib.h>
struct Student
{
	char cName[20];
	int iNumber;
	struct Student *next; //指针域 
};
int iCount;

struct Student *Create()
{
	struct Student *pHead=NULL;//初始化表头和长度 
	struct Student *pNew,*pEnd;
	iCount=0;
	pEnd=pNew=(struct Student *)malloc(sizeof(struct Student));//第一个节点 
	printf("学号输入为0时，结束输入\n");
	printf("请输入姓名：\n");
	scanf("%s",pNew->cName);//pew->cName == (*pew).cName
	printf("请输入学号：\n");
	scanf("%d",&pNew->iNumber);	
  while(pNew->iNumber!=0)
  {
    iCount++;
	if(iCount==1)//新节点连到当前节点的尾部 
		pHead=pNew;
	else
		pEnd->next=pNew;
	pNew->next=NULL;//新节点指针域指空 
	pEnd=pNew;//新节点变当前节点尾部 
	
	pNew=(struct Student *)malloc(sizeof(struct Student));
	printf("请输入姓名：\n");
	scanf("%s",pNew->cName);
	printf("请输入学号：\n");
	scanf("%d",&pNew->iNumber);
  }
  free(pNew);
  return pHead;	
}

void printf_stu(struct Studet *pHead)
{
	struct Student *pTemp;
	int iIndex=1;
	printf("***********本名单有%d个学生**********\n",iCount);
	pTemp=pHead;
  while(pTemp!=NULL)
  {
  	printf("第%d个学生是：\n",iIndex);
  	printf("姓名：%s\n",pTemp->cName);
  	printf("学号：%d\n",pTemp->iNumber);
  	pTemp=pTemp->next;
  	iIndex++;
  }
}
int main (void)
{
	struct Student *pHead;
	pHead=Create();//链表的创立 
	printf_stu(pHead);//链表的输出 
}