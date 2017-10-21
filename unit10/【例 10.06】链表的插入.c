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
	printf("名单中有%d个学生\n",iCound);
		printf("编号\t姓名\t学号\n");
	while(pHead!=NULL)
	{
		printf("%d\t%s\t%d\n",iIndex,pHead->name,pHead->iNumber);
		iIndex++;
		pHead=pHead->next; 
	}
}
struct Student *Insert1(struct Student *pHead)//放在第一节点 方法一 
{
	struct Student  *pNew; 
	printf("请输入新加入学生的姓名和学号：\n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	
	pNew->next=pHead;//连接第一节点 
	pHead=pNew;//将头部指针指向新节点 

	iCound++;
	return pHead;
}

Insert2(int *p)//放在第一节点 方法二 二级指针 
{
	struct Student  *pNew; 
	printf("请输入新加入学生的姓名和学号：\n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	
	pNew->next=(struct Student *)*p;//连接第一节点 
	*p=pNew;//将头部指针指向新节点 

	iCound++;
}

void Insert3(struct Student *pHead)//插入指定学生后面
{
	struct Student  *pNew; 
	char name[20];
	printf("请输入想插入在那位学生后面：\n");
	scanf("%s",name); 
	
	printf("请输入新加入学生的姓名和学号：\n");//新节点的输入 
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	
	while(pHead->next&&strcmp(pHead->name,name)) pHead=pHead->next;
	pNew->next=pHead->next;//连接 
	pHead->next=pNew;

	iCound++;
	 
} 
void Insert4(struct Student *pHead)//插入尾部 
{
	struct Student  *pNew; 
	printf("请输入新加入学生的姓名和学号：\n");
	pNew=(struct Student *)malloc(sizeof(struct Student));
	scanf("%s",pNew->name);
	scanf("%d",&pNew->iNumber);
	
	while(pHead->next!=NULL) pHead=pHead->next;
	pNew->next=pHead->next;
	pHead->next=pNew;//连接 
	iCound++;
} 
int main(void)
{
	struct Student *pHead;
	pHead=Create();//创建新链表;
	print(pHead); 
	//pHead=Insert1(pHead);//插入到头部后面方法1  
	//Insert2(&pHead);//插入到头部后面 方法2 
	Insert3(pHead);//插入指定学生后面
	//Insert4(pHead);//插入尾部 
	print(pHead); 
}