#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
typedef struct Movie
{
	int id;
	char name[20];
	char director[10];
	char actor[20];
	char date[10];
	double score;
	struct Movie *next;	
}Eilm;

void show()
{
	printf("         -----------------------------------------------------------\n");
	printf("         !                    学生信息管理系统                     !\n");
	printf("         -----------------------------------------------------------\n");
	printf("         !                    1-录入影片信息                       !\n");
	printf("         !                    2-查询影片信息                       !\n");
	printf("         !                    3-修改影片信息                       !\n");
	printf("         !                    4-删除影片信息                       !\n");
	printf("         !                    5-显示所以影片                       !\n");
	printf("         !                    6-影片总数                           !\n");
	printf("         !                    7-退出                               !\n"); 
	printf("         -----------------------------------------------------------\n");
	
} 
int iCound;
void input_1(struct Movie *pNew)//输入节点的值 
{
	fflush(stdin);
	printf("请输入影片编号：");
	scanf("%d",&pNew->id); 
	if(pNew->id==-1)
		return;
	fflush(stdin);
	printf("请输入影片名称：");
	gets(pNew->name);
	printf("请输入导演：");
	gets(pNew->director);
	printf("请输入主演：");
	gets(pNew->actor);
	printf("请输入上映日期：");
	gets(pNew->date);
	printf("请输入影片评分"); 
	scanf("%lf",&pNew->score); 
	printf("\n");
}
struct Movie *input()//创建链表 
{
	struct Movie *pHead=NULL,*pEnd,*pNew;
	iCound=0;
	pEnd=pHead=(struct Movie *)malloc(sizeof(struct Movie));
	pNew=(struct Movie *)malloc(sizeof(struct Movie));
	printf("编号输入-1时，停止输入\n");
	input_1(pNew);
	while(pNew->id!=-1)
	{
		iCound++;
		pEnd->next=pNew;
		pNew->next=NULL;
		pEnd=pNew;
		pNew=(struct Movie *)malloc(sizeof(struct Movie)); 
		input_1(pNew);
	}
	free(pNew);
	return pHead; 	
}
void inquiry(struct Movie *pHead)//查询 
{
	int a;
	printf("请输入你需要查询影片的编号："); 
	scanf("%d",&a);
	while(pHead&&pHead->id!=a)
		pHead=pHead->next;
	if(pHead==NULL)
		printf("未查找到\n");
	else
	{
		printf("编号\t名称\t导演\t主演\t上映日期\t影片评分\n");
		printf("No.%d\t",pHead->id);
		printf("%s\t%s\t%s\t",pHead->name,pHead->director,pHead->actor); 
		printf("%s\t\t%lf\n",pHead->date,pHead->score); 
		pHead=pHead->next;
	}
}
void chang(struct Movie *pHead)//修改 
{
	int a;
	printf("请输入你修改查询影片的编号："); 
	scanf("%d",&a);
	while(pHead&&pHead->id!=a)
		pHead=pHead->next;
	if(pHead==NULL)
		printf("未查找到\n");
	else
		input_1(pHead); 
}
void strike_out(struct Movie *pHead)//删除 
{
	int a;
	struct Movie *pHead_1;
	printf("请输入你删除查询影片的编号："); 
	scanf("%d",&a);
	while(pHead&&pHead->id!=a)
	{
		pHead_1=pHead;
		pHead=pHead->next;
	}	
	if(pHead==NULL)
		printf("未查找到！\n");
	else
	{
		pHead_1->next=pHead->next;
		free(pHead);
		iCound--;
		printf("已删除！\n");
	}
 
}
void output(struct Movie *pHead)//输出 
{
	int i=0;
	pHead=pHead->next;
	printf("编号\t名称\t导演\t主演\t上映日期\t影片评分\n");
	while(pHead!=NULL)
	{
		printf("No.%d\t",pHead->id);
		printf("%s\t%s\t%s\t",pHead->name,pHead->director,pHead->actor); 
		printf("%s\t\t%lf\n",pHead->date,pHead->score); 
		pHead=pHead->next;
	}
}
void length(struct Movie *pHead)
{
	int i=0;
	while(pHead->next)
	{
		i++; 
		pHead=pHead->next;
	}
	printf("%d %d\n",i,iCound);
}
int main(void)
{
	int a;
	struct Movie *pHead;
	while(1)
	{
		system("cls");
		show();
		scanf("%d",&a);
		switch(a)
		{
			case 1:pHead=input();break;//录入
			case 2:inquiry(pHead);break;//查询 
			case 3:chang(pHead);break;//修改 
			case 4:strike_out(pHead);break;//删除
			case 5:output(pHead);break;//显示所有 
			case 6:length(pHead);break;//输入影片数量 
			case 7:exit(0);break;
			default :printf("输入有误请重新输入\n");break; 
		}
		printf("按任意键进行下一步操作\n");
		Sleep(150);
		getch();
	}
}
  