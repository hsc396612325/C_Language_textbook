#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define N 30
struct address_list
{
	char name[20];
	char telephone[30];	
};
struct address_list addr[N]; 
int n;
void sore()
{
	int i,j;
	struct address_list t;
	for(i=0;i<n;i++)//冒泡 
		for(j=0;j<n-i-1;j++)
			if(strcmp(addr[j].name,addr[j+1].name)==1)
			{
				t=addr[j];
				addr[j]=addr[j+1];
				addr[j+1]=t;
			}			
}
void show()//打印画面 
{
	printf("************************通讯录*************************\n");
	printf("1.输入联系人(必须先输入)       2.输出所有联系人\n");
	printf("3.查询联系人                   4.增加新的联系人\n");
	printf("5.删除联系人                   0.退出\n");
	printf("请输入相应的数字\n"); 
	printf("************************通讯录*************************\n");
}
void input()//输入 
{
	int i;
	printf("你需要输入多少个联系人：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个联系人的信息：\n",i+1);
		printf("请输入姓名：");
		scanf("%s",addr[i].name);
		printf("请输入电话：");
		scanf("%s",addr[i].telephone); 
	}
	sore(); 
}
void output()//输出 
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("第%d个联系人的信息：\n",i+1);
		printf("姓名：%s\n",addr[i].name);
		printf("电话：%s\n",addr[i].telephone);
	} 
}
void inquiry()//查询 
{
	char str[30];
	int i;
	printf("请输入你要查询的联系人姓名/电话：");
	scanf("%s",str);
	for(i=0;i<n;i++)
		if(strcmp(addr[i].name,str)==0||strcmp(addr[i].telephone,str)==0)
			printf("%s的电话号码为：%s\n",addr[i].name,addr[i].telephone);
} 
void increase()//新增 
{
	int i;
	n++;
	printf("请输入新加联系人的信息：\n",i+1);
	printf("请输入姓名：");
	scanf("%s",addr[n-1].name);
	printf("请输入电话：");
	scanf("%s",addr[n-1].telephone); 
	output();
	sore(); 
	
}
void strike_out()// 删除 
{
	int i,j;
	char str[30];
	printf("请输入需要删除联系人姓名/电话：\n");
	scanf("%s",str);
	for(i=0;i<n;i++)
		if(strcmp(addr[i].name,str)==0||strcmp(addr[i].telephone,str)==0)
		{
			for(j=i;j<n-1;j++)
				addr[j]=addr[j+1];
			n--;
		}
	output();
		
}
int main(void)
{
	int a;
	while(1)
	{
		show();
		scanf("%d",&a);
		switch(a)
		{
			case 1:input();break;//输入 
			case 2:output();break;//输出 
			case 3:inquiry();break;//查询 
			case 4:increase();break;//增加 
			case 5:strike_out();break;//删除 
			case 0:exit(0);
		}
		getch();
		system("cls"); 
	}
}