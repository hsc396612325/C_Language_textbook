#include <stdio.h>
#include <stdlib.h>
#define N 20
struct student
{
	char id[20];
	char name[20];
	char sex[5];
	int score[4];
	double aver;
};

void Input(struct student st[],int n)//输入 
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("输入第%d位同学的信息：\n",i+1);
		printf("输入学号：");
		scanf("%s",&st[i].id);
		printf("输入名字：");
		scanf("%s",st[i].name);
		printf("输入性别：");
		scanf("%s",st[i].sex);
		printf("输入四门科目的成绩：");
		for(j=0;j<4;j++)
			scanf("%d",&st[i].score[j]); 
	} 
}
void CalAver(struct student st[],int n)//计算平均数 
{
	int i;
	for(i=0;i<n;i++)
		st[i].aver=(st[i].score[0]+st[i].score[1]+st[i].score[2]+st[i].score[3])/3.0; 
	
}
void Sore(struct student st[],int n)//排序 
{
	int i,j;
	struct student t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
			if(st[j].aver<st[j+1].aver)
			{
				t=st[j];
				st[j]=st[j+1];
				st[j+1]=t;
					
			}
	}
}
void Output(struct student st[],int n)//输出 
{
	int i;
	printf("\n学号\t姓名\t性别\t科目一\t科目二\t科目三\t科目四\t平均分\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\t%s\t%d\t",st[i].id,st[i].name,st[i].sex,st[i].score[0]);
		printf("%d\t%d\t%d\t%lf\n",st[i].score[1],st[i].score[2],st[i].score[3],st[i].aver);
	}
}
int main(void)
{
	int n;
	struct student st[N];
	printf("你要输入多少个学生的成绩：\n");
	scanf("%d",&n);
	Input(st,n);//输入 
	CalAver(st,n);//平均数 
	Sore(st,n);//排序 
	Output(st,n);//输出 
}