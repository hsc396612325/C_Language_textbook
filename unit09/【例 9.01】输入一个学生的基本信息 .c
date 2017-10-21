#include <stdio.h>
#include <stdlib.h>
struct date//定义结构体 
{
	int year;//年
	int month;//月
	int day;//日	
};

struct student
{
	char num[9];//学号 
	char numr[21];//姓名
	char sex[4];//性别
	int age;//年龄
	struct date birthday;//出生年月
	int score[3];//三门科目成绩
	double aver;	
};

int main(void)
{
	struct student stu;//定义结构体变量
	int i,sum=0;
	printf("请依次输入以下信息：\n");
	printf("请输入学号:\n");
	gets(stu.num);
	printf("请输入姓名:\n");
	gets(stu.numr);
	printf("请输入性别:\n");
	gets(stu.sex); 
	printf("请输入年龄:\n");
	scanf("%d",&stu.age);
	printf("请输入出生日期:\n");
	scanf("%d%d%d",&stu.birthday.year,&stu.birthday.month,&stu.birthday.day);
	printf("请输入三门科目成绩:\n");
	for(i=0;i<3;i++)
	{
		scanf("%d",&stu.score[i]);
		sum+=stu.score[i]; 
	}
	stu.aver=sum/3.0;
	
	printf("\n这名学生的信息如下:\n");
	printf("学号:%s\n",stu.num);
	printf("姓名:%s\n",stu.numr);
	printf("性别:%s\n",stu.sex); 
	printf("年龄:%d\n",stu.age);
	printf("出生日期:%d.%d.%d\n",stu.birthday.year,stu.birthday.month,stu.birthday.day);
	printf("三门科目成绩:%d %d %d\n",stu.score[0],stu.score[1],stu.score[2]);
	printf("平均分%g\n",stu.aver);	
}