#include <stdio.h>
#define N 30 
struct date//日期 
{
	int year;//年
	int month;//月
	int day;//日	
};

struct food
{
	struct date f_date;//保质期 
};
struct elsctuical
{
	char unit[30];//保修单位 
	char telephone[30];//保修电话 
};
union kind
{
	struct elsctuical e;//家电 
	struct food f;//食品 
};
struct commodity
{
	char number[20];//商品号 
	char name[30];//商品名 
	struct date indate;//进货日期
	int prix;//单价
	int num ;//数量 
	char a;//种类
	union kind k;//家电或食品信息 
};

struct commodity comm[N];
int n;

void input()
{
	int i;
	printf("你需要输入多少个商品的信息\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("请输入第%d个商品的信息：\n",i+1);
		printf("请输入商品编号：");
		scanf("%s",comm[i].number); 
		printf("请输入商品名：");
		scanf("%s",comm[i].name);
		printf("请输入进货日期（例2017 4 14）:");
		scanf("%d %d %d",&comm[i].indate.year,&comm[i].indate.month,&comm[i].indate.day);
		printf("请输入商品单价：");
		scanf("%d",&comm[i].prix);
		printf("请输入商品数量：");
		scanf("%d",&comm[i].num);
		printf("请输入商品种类(家电类输e,食物类输f)：");
		fflush(stdin);
		scanf("%c",&comm[i].a);
		if(comm[i].a=='e'||comm[i].a=='E')
		{
			printf("请输入家电的保修单位：");
			scanf("%s",comm[i].k.e.unit);
			printf("请输入家电的保修电话：");
			scanf("%s",comm[i].k.e.telephone); 
		} 
		else if(comm[i].a=='f'||comm[i].a=='F')
		{
			printf("请输入食物的保质期：");
			scanf("%d%d%d",&comm[i].k.f.f_date.year,&comm[i].k.f.f_date.month,&comm[i].k.f.f_date.day);	 
		}
	
	printf("\n");	
	}
}
void output()
{

	int i;
	for(i=0;i<n;i++)
	{
		printf("第%d个商品的信息：\n",i+1);
		printf("商品编号：");
		printf("%s\n",comm[i].number); 
		printf("商品名：");
		printf("%s\n",comm[i].name);
		printf("进货日期:");
		printf("%d %02d %02d\n",comm[i].indate.year,comm[i].indate.month,comm[i].indate.day);
		printf("商品单价：");
		printf("%d\n",comm[i].prix);
		printf("商品数量：");
		printf("%d\n",comm[i].num);
		printf("商品种类：");
		if(comm[i].a=='e'||comm[i].a=='E')
		{
			printf("家电类\n");
			printf("家电的保修单位：");
			printf("%s\n",comm[i].k.e.unit);
			printf("家电的保修电话：");
			printf("%s\n",comm[i].k.e.telephone); 
		} 
		else if(comm[i].a=='f'||comm[i].a=='F')
		{
			printf("食品类\n");
			printf("食物的保质期：");
			printf("%d %02d %02d\n",comm[i].k.f.f_date.year,comm[i].k.f.f_date.month,comm[i].k.f.f_date.day);	 
		}
		printf("\n");	
	}	
}
int main (void)
{
	input();
	output();
}